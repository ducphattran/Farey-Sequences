# Farey Sequence Generator (C++)

This project implements a recursive algorithm to generate **Farey Sequences** of a given order `N`, following the precise mathematical method used in number theory. The code is written in C++ and works without the need for C++17 features, making it portable and compiler-friendly.

---

## 📘 What is a Farey Sequence?

A **Farey sequence of order N**, denoted `F_N`, is the ascending sequence of all completely reduced fractions between 0 and 1 which have denominators less than or equal to `N`.

For example:
F_1 = 0/1 1/1
F_2 = 0/1 1/2 1/1
F_3 = 0/1 1/3 1/2 2/3 1/1
F_4 = 0/1 1/4 1/3 1/2 2/3 3/4 1/1
---

## 🧠 Algorithm Used

Instead of checking all possible numerators and denominators, this program **constructs the sequence recursively**:

- Start with `F_1 = {0/1, 1/1}`
- To generate `F_(N+1)` from `F_N`:
  - Insert a new fraction `a+c / b+d` between two adjacent fractions `a/b` and `c/d` **if and only if** `b + d == N + 1`

This method is mathematically elegant and matches how Farey sequences are defined in textbooks and academic materials.

---

## 🛠️ How to Compile

Use any C++ compiler. Example with `g++`:

g++ main.cpp -o main

## ▶️ How to Run
./farey
You will be prompted to enter an integer N. The program will output the Farey sequence F_N.

##💡 Example
Input: " Enter Farey sequence order N: 6 "
Output: " 0/1 1/6 1/5 1/4 1/3 2/5 1/2 3/5 2/3 3/4 4/5 5/6 1/1 "

## Conclusion
This project successfully demonstrates the recursive generation of Farey sequences using a mathematically accurate and efficient algorithm. 
The implementation respects the formal definition of the sequence and avoids brute-force enumeration. 
This method is clean, efficient, and shows the elegance of mathematical construction within programming.


