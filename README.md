Markdown
# 🎮 Secret Code Game

An interactive terminal/console-based game developed in C, where the player's goal is to guess a secret 4-digit code within a limited number of attempts.

---

## 📌 About the Project

The program generates a secret random number between 1000 and 9999. On every turn, the system validates your input and updates the status of the correctly guessed digits. Starting from the 5th attempt, the game begins providing smart hints about any remaining hidden digits to help you break the code.

---

## 🛠️ Tech Stack & Tools

* **Language:** C (ANSI C / C17 standard)
* **Compiler:** GCC / MinGW-w64
* **Standard Libraries:** `<stdio.h>`, `<stdlib.h>`, `<time.h>`, `<locale.h>`

---

## 📁 Repository Structure

```text
.
├── game.c              # Main source code
├── .gitignore          # Git ignore file
└── README.md           # Project documentation
Note: Make sure to adjust filenames in the structure above if your local files use different names.

🚀 How to Run
Option 1: Compiling and Running via GCC (Recommended)
To compile and run the source code using GCC:

Open your terminal in the project directory.

Compile the code:

Bash
gcc -o game game.c
Execute the generated binary:

Bash
.\game.exe
🎯 Gameplay & Rules
Attempts: You have a maximum of 10 attempts to guess the 4-digit secret code.

Range: The secret number is randomly generated between 1000 and 9999.

Hints (Starting at Attempt 5):

Parity hints: The game reveals whether a hidden digit is even or odd.

Magnitude hints: The game reveals whether a hidden digit is greater than 5 or less than or equal to 5.

Code Status: The display Your code status: _ _ _ _ updates automatically as you reveal digits in their correct positions.

👤 Author
Developed by Gabriel Pitoli Bueno.
