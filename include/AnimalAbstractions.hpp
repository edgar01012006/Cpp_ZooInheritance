#ifndef ANIMALABSTRACTIONS_HPP
#define ANIMALABSTRACTIONS_HPP

#include <string>
#include <iostream>

enum class Kind {
    Animal, Mammal, Bird, Reptile,
    Lion, Tiger, Elephant,
    Eagle, Parrot,
    Snake, Crocodile
};

class Animal {
    public:
        Animal(const std::string& name, Kind kind = Kind::Animal);
        virtual ~Animal() = default;
        void printInfo() const;   // print id, name, age, health, hunger
        void print() const;
        //void feed();              // decrease hunger, increase health
        Kind kindOf() const { return m_kind; }
        int id() const { return m_id; }

    protected:
        std::string m_name;
        int m_health;     // 0..100
        int m_hunger;     // 0..100
        Kind m_kind;
        int m_id;
    private:
        static int nextId;
};

class Mammal : public Animal {
    protected:
        bool m_warmBlooded;   // always true for mammals
    public:
        Mammal(const std::string& name, Kind kind = Kind::Mammal) : Animal { name, kind }, m_warmBlooded { true } {}
        void printInfo() const;
        void MakeSound() { std::cout << "Mammal makes a generic sound\n"; }   // prints a generic mammal sound
};

class Bird : public Animal {
    protected:
        double m_wingSpan;
    public:
        Bird(const std::string& name, double wingSpan, Kind kind = Kind::Mammal) : Animal { name, kind }, m_wingSpan { wingSpan } {}
        void printInfo() const;
        void Fly() { std::cout << "The bird is flying\n"; }       // prints that the bird is flying
};

class Reptile : public Animal {
    protected:
        bool m_coldBlooded;   // always true for reptiles
    public:
        Reptile(const std::string& name, Kind kind = Kind::Mammal) : Animal { name, kind }, m_coldBlooded { true } {}
        void printInfo() const;
        void Sunbathe() { std::cout << "Reptile is warming itself in sun\n"; }    // prints that reptile warms itself in sun
};

#endif /* ANIMALABSTRACTIONS_HPP */