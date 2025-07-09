#include <iostream>
#include <cstdlib>
#include <string>

#define reset  "\033[0m"
#define blue   "\033[34m"
#define red    "\033[31m"
#define green  "\033[32m"

void clear_screen() {
    system("clear");
    system("cls");
}

void banner() {
    std::cout << blue << R"(
 ██▓     █    ██  ███▄    █  ▄▄▄       ██▀███   ██▓  ██████ 
▓██▒     ██  ▓██▒ ██ ▀█   █ ▒████▄    ▓██ ▒ ██▒▓██▒▒██    ▒ 
▒██░    ▓██  ▒██░▓██  ▀█ ██▒▒██  ▀█▄  ▓██ ░▄█ ▒▒██▒░ ▓██▄   
▒██░    ▓▓█  ░██░▓██▒  ▐▌██▒░██▄▄▄▄██ ▒██▀▀█▄  ░██░  ▒   ██▒
░██████▒▒▒█████▓ ▒██░   ▓██░ ▓█   ▓██▒░██▓ ▒██▒░██░▒██████▒▒
░ ▒░▓  ░░▒▓▒ ▒ ▒ ░ ▒░   ▒ ▒  ▒▒   ▓▒█░░ ▒▓ ░▒▓░░▓  ▒ ▒▓▒ ▒ ░
░ ░ ▒  ░░░▒░ ░ ░ ░ ░░   ░ ▒░  ▒   ▒▒ ░  ░▒ ░ ▒░ ▒ ░░ ░▒  ░ ░
  ░ ░    ░░░ ░ ░    ░   ░ ░   ░   ▒     ░░   ░  ▒ ░░  ░  ░  
    ░  ░   ░              ░       ░  ░   ░      ░        ░  

        Lunaris — toolkit made by MoonSec (MS)
    )" << reset << std::endl;
}

void terms_service() {
    std::cout << blue << R"(
────────────────────────────────────────────────────
                   TERMS OF SERVICE
────────────────────────────────────────────────────

1. This tool, named Lunaris, is intended strictly for legal, ethical, and educational purposes.
   Any unauthorized or illegal usage is solely the responsibility of the user. The developer is not liable.

2. Lunaris was fully developed by MoonSec (MS). Redistribution, modification, or reposting is prohibited
   without express written permission from the original creator.

3. By using this software, you agree to comply with all local, national, and international laws
   related to cybersecurity and ethical hacking.

4. This tool may interface with external scripts (e.g., sqlmap.py, path.sh). Please ensure 
   they are installed and used in accordance with their respective licenses.

────────────────────────────────────────────────────
    )" << reset << std::endl;
}

void sql() {
    std::cout << green << "\n[+] Launching SQLMap..." << reset << std::endl;
    system("python3 src/sqlmap.py");
}

void path_finder() {
    std::cout << green << "\n[+] Starting path finder with wordlist..." << reset << std::endl;
    system("bash src/path.sh");
}

void clone_html() {
    std::cout << green << "\n[+] Cloning website HTML..." << reset << std::endl;
    system("python3 src/clone.py");
}

void wait_for_user() {
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore();
}

void menu() {
    std::string choice;

    while (true) {
        clear_screen();
        banner();

        std::cout << red << R"(

)" << reset;

        std::cout << "\n[+]choice: ";
        std::getline(std::cin, choice);

        if (choice == "1") {
            clear_screen();
            banner();
            sql();
            wait_for_user();
        } else if (choice == "2") {
            clear_screen();
            banner();
            path_finder();
            wait_for_user();
        } else if (choice == "3") {
            clear_screen();
            banner();
            clone_html();
            wait_for_user();
        } else if (choice == "4") {
            clear_screen();
            banner();
            terms_service();
            wait_for_user();
        } else if (choice == "5") {
            std::cout << green << "\n[+] Exiting Lunaris. Stay safe.\n" << reset;
            break;
        } else {
            std::cout << red << "[-] Invalid option. Please select between 1-5.\n" << reset;
            wait_for_user();
        }
    }
}

int main() {
    clear_screen();
    menu();
    return 0;
}
