# 🦁 Zoo Inheritance Project — Object-Oriented Design Practice

A C++ project demonstrating classical **inheritance**, **polymorphism**, **safe casting**, and hierarchical object modeling with an `Animal` base class and multiple derived species.

---

## 📂 Project Structure

├── main.cpp  
├── include/  
│   ├── AnimalAbstractions.hpp   # Base class + Kind enum  
│   └── Animals.hpp              # Derived classes and species declarations  
├── src/  
│   ├── AnimalAbstractions.cpp  
│   └── Animals.cpp  
└── README.md

---

## ⚙️ Build & Run

Compile and execute with **g++ (C++11)**:

```bash
g++ -std=c++11 -Iinclude src/*.cpp main.cpp -o main
./main