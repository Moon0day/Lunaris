
# 🌙 Lunaris — Cybersecurity Toolkit by MoonSec

**Lunaris** is a modular cybersecurity and ethical hacking toolkit built with a C++ interface and Python/Bash backends. It offers penetration testing tools in a lightweight, terminal-based experience.

> ⚠️ For **educational and legal** use only. Misuse is strictly prohibited.

---

## 📖 Table of Contents

- [✨ Features](#-features)
- [📥 Download & Setup](#-download--setup)
- [🚀 Usage Guide](#-usage-guide)
- [📂 Folder Structure](#-folder-structure)
- [🛠️ Tools Overview](#️-tools-overview)
- [📜 Full Terms of Service](#-full-terms-of-service)
- [⚠️ Legal Disclaimer](#️-legal-disclaimer)
- [🤝 Contributing](#-contributing)
- [👤 Author](#-author)
- [📄 License](#-license)

---

## ✨ Features

- ✅ Terminal-based menu in C++
- 🐍 Python tool integration
- 🐚 Bash support for wordlists and scanning
- 📡 SQL injection automation via sqlmap
- 🧱 Directory brute-forcing
- 🕸️ Website HTML cloning
- 📄 Full embedded Terms of Service
- 📁 Organized in `/src/` and `/root` folders

---

## 📥 Download & Setup

### 🔻 Clone the Repository

```bash
git clone https://github.com/moonsec/lunaris.git
cd Lunaris

🛠️ Run Setup Script

 python3 lunarissetup.py
this will compile the c++ code

and pip requirements are in the txt requirements.txt
run
 "pip install -r requirements.txt"
🔮 Run Lunaris

./main

    ✅ All external tools/scripts are loaded from the /src folder.

📂 Folder Structure

lunaris/
├── main.cpp             # Main C++ code (menu UI)
├── main                 # Output binary after compilation
├── lunarissetup.py      # Setup script for Python dependencies
├── requirements.txt     # Python packages used by tools
├── README.md            # This file
└── src/
    ├── sqlmap.py        # SQL injection wrapper
    ├── path.sh          # Directory scanner
    └── clone.py         # HTML cloner

🛠️ Tools Overview
[1] SQLMap Injection Tool

Wrapper for sqlmap.py to automate basic SQLi scans.

python3 src/sqlmap.py

[2] Path Finder (Directory Bruteforce)

Runs a Bash script to enumerate hidden paths using a wordlist.

bash src/path.sh

[3] HTML Cloner

Clones frontend HTML of any given site URL.

python3 src/clone.py

[4] Terms of Service

Opens full terms inside the tool menu.
[5] Exit

Gracefully closes Lunaris.
📜 Full Terms of Service

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

5. You are responsible for ensuring that your use of Lunaris does not violate any terms of service, 
   acceptable use policies, or cybersecurity laws in your jurisdiction.

6. Any attempt to use Lunaris against systems without explicit permission is strictly prohibited.

7. Lunaris is provided without any warranties, express or implied. The developers are not responsible 
   for any data loss, server interruption, or legal consequences resulting from misuse.

8. By launching Lunaris, you automatically agree to all terms listed above.

⚠️ Legal Disclaimer

Lunaris is distributed for educational purposes only.

Any unauthorized or malicious usage is solely the responsibility of the user. The developers and contributors assume no liability for misuse or damage caused by this toolkit.

    Use only in labs, CTFs, or with explicit permission from system owners.

🤝 Contributing

Pull requests are welcome!

To contribute:

    Fork this repo

    Create a new branch: git checkout -b feature/tool-name

    Commit changes

    Push to your fork

    Create a pull request

👤 Author

MoonSec (MS)
Ethical Hacker & Developer @Lunaris
Contact: github.com/Moon0day
📄 License

This project is licensed under a closed model. Redistribution or repackaging is not permitted without direct consent.

For permission to use this toolkit in courses, training, or consulting: please contact the author.

Stay legal.
