import requests
import os
from urllib.parse import urlparse, urljoin
from bs4 import BeautifulSoup

def sanitize_domain(domain):
    if domain.startswith("www."):
        domain = domain[4:]
    return domain.replace("/", "_").replace(":", "_")

def get_all_paths(base_url, html):
    soup = BeautifulSoup(html, "html.parser")
    urls = set()

    for tag, attr in [("a", "href"), ("img", "src"), ("script", "src"), ("link", "href")]:
        for element in soup.find_all(tag):
            link = element.get(attr)
            if link:
                full_url = urljoin(base_url, link)
                urls.add(full_url)

    return urls

def main():
    url = input("Enter the URL of the website to clone (e.g., https://example.com): ").strip()

    if not url.startswith("http://") and not url.startswith("https://"):
        print("Please include the http:// or https:// in the URL.")
        return

    try:
        response = requests.get(url)
        response.raise_for_status()
    except requests.RequestException as e:
        print(f"Error fetching website: {e}")
        return

    parsed_url = urlparse(url)
    domain = sanitize_domain(parsed_url.netloc)

    os.makedirs("htmls", exist_ok=True)

    file_path = os.path.join("htmls", f"{domain}.html")
    with open(file_path, "w", encoding="utf-8") as file:
        file.write(response.text)

    print(f"Website cloned and saved as: {file_path}")

    urls = get_all_paths(url, response.text)

    urls_file = os.path.join("htmls", f"{domain}_urls.txt")
    with open(urls_file, "w", encoding="utf-8") as f:
        for link in sorted(urls):
            f.write(link + "\n")

    print(f"Extracted {len(urls)} URLs/paths saved to: {urls_file}")

if __name__ == "__main__":
    main()

