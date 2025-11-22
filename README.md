# 🐾 Zoo Animal Behavior System — Interface-Based OOP Design

A C++ project demonstrating **behavior-driven modeling**, where animals are organized by the behaviors they can perform rather than traditional species inheritance. Behaviors such as flying, swimming, walking, or roaring are represented as **interfaces** (pure abstract classes), and each animal implements only the behaviors it naturally performs.

This project showcases:

- Interface-based polymorphism  
- Composition over inheritance  
- Flexibility to add new behaviors and species  
- Clean separation between “what an animal is” and “what an animal can do”

---

## 📂 Project Structure

├── main.cpp  
├── include/  
│   ├── Behaviors.hpp  
│   └── Animals.hpp  
├── src/  
│   ├── Behaviors.cpp  
│   └── Animals.cpp  
└── README.md

---

## ⚙️ Build & Run

Compile and execute with **g++ (C++11)**:

```bash
g++ -std=c++11 -Iinclude src/*.cpp main.cpp -o main
./main
