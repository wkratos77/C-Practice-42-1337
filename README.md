# 42 Exam Practice – Final Exam Preparation

![Language](https://img.shields.io/badge/language-C-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Status](https://img.shields.io/badge/status-Active-success.svg)
![Contributions](https://img.shields.io/badge/contributions-welcome-orange.svg)

This repository contains a collection of small C programs and functions I implemented to prepare for the **42 School final exam**.  
Each file focuses on solving a specific exercise that can appear during the exam.  
They cover string manipulation, number handling, algorithmic thinking, and various utility functions.

---

## 📑 Table of Contents
1. [Overview](#-overview)
2. [Project Structure](#-project-structure)
3. [Usage](#-usage)
4. [Example](#-example)
5. [About 42](#-about-42)
6. [Contributing](#-contributing)
7. [License](#-license)

---

## 📌 Overview
The goal of this repository is to:
- **Practice** common C exercises that appear in 42 School exams.
- **Review** essential programming concepts such as strings, arrays, pointers, and algorithms.
- **Improve** speed and accuracy under time constraints.
- **Provide** a reference for other students preparing for similar challenges.

---

## 📂 Project Structure

| File / Function         | Description |
|-------------------------|-------------|
| `add_prime_sum`         | Calculates the sum of prime numbers up to a given number. |
| `aff_a`                 | Displays the first occurrence of the letter `'a'`. |
| `alt_case`              | Alternates the case of words in a string: first word lowercase, second uppercase, etc.; handles multiple spaces and tabs correctly. |
| `do_op`                 | Simple calculator: performs addition, subtraction, multiplication, division, and modulo. |
| `epur_str`              | Removes extra spaces and tabs from a string. |
| `even`                  | Prints whether a number is even or odd. |
| `expand_str`            | Expands spaces and tabs into exactly three spaces between words. |
| `first_word`            | Displays the first word in a string. |
| `ft_atoi`               | Converts a string to an integer. |
| `ft_count_words`        | Counts the number of words in a string. |
| `ft_interval`           | Creates and displays an array of integers between two values. |
| `ft_itoa`               | Converts an integer to a string. |
| `ft_range`              | Creates an array of integers in a given range. |
| `ft_str_is_numeric`     | Checks if a string contains only digits. |
| `ft_strcapitalize`      | Capitalizes the first letter of each word in a string. |
| `ft_strlcat`            | Concatenates two strings with size limit. |
| `ft_strncpy`            | Copies a string up to `n` characters. |
| `ft_strrev`             | Reverses a string. |
| `ft_strstr`             | Finds the first occurrence of a substring. |
| `inter`                 | Displays the intersection of two strings. |
| `inter_space`           | Displays common characters of two strings, separated by spaces. |
| `is_power_of_2`         | Checks if a number is a power of two. |
| `is_separator`          | Checks if a character is a separator (space, tab, etc.). |
| `last_word`             | Displays the last word in a string. |
| `max`                   | Returns the maximum value from an array of integers. |
| `operations`            | Performs arithmetic operations based on arguments. |
| `paramsum`              | Displays the number of program arguments. |
| `repeat_alpha`          | Repeats each letter a number of times equal to its position in the alphabet. |
| `rev_print`             | Reverses and prints a string. |
| `rostring`              | Moves the first word of a string to the end. |
| `rot_13`                | Encodes a string using ROT13. |
| `rotone`                | Shifts each letter by one in the alphabet. |
| `rstr_capitalizer`      | Capitalizes the last letter of each word and lowercases the rest. |
| `search_and_replace`    | Replaces all occurrences of one character with another. |
| `snake`                 | Converts CamelCase to snake_case. |
| `snake_to_camel`        | Converts snake_case to CamelCase. |
| `strlen`                | Returns the length of a string. |
| `ulstr`                 | Switches lowercase letters to uppercase and vice versa. |
| `union`                 | Displays the union of characters from two strings. |
| `wdmatch` / `wdmatch_`  | Checks if all characters of a word appear in another string in order. |
| `zigzag`                | Prints a zigzag pattern based on given arguments. |

---

## 🛠 Usage

Each file is a standalone program.  
To compile and run an exercise:

```bash```
gcc -Wall -Wextra -Werror file_name.c -o program_name
./program_name arguments

### Example for first_word.c:

```bash```
gcc first_word.c -o first_word   

```bash```
./a.out "Hello World" | cat -e

Output:

Hello$

---

## 🏫 About 42
[42](https://42.fr/en/homepage/) is an innovative, tuition-free programming school with a unique **peer-to-peer learning** methodology.  
It focuses on:
- Project-based learning
- Problem-solving without formal teachers
- Collaborative coding environments
- Strong emphasis on **self-learning** and **creativity**
- Preparing students for **real-world software engineering challenges**

---

## 🤝 Contributing

Contributions are welcome!  
If you’d like to improve or expand this repository:

1. **Fork** the repository
2. Create a new branch:
   
   ```bash```
   git checkout -b feature-name
3. Make your changes and commit:
   
   ```bash```
  git commit -m "Add feature description"

4. Push to your branch:  
   
   ```bash```
  git push origin feature-name

5. Open a Pull Request

---

## 📜 License

This project is licensed under the MIT License – you are free to use, modify, and distribute it for learning and practice.
