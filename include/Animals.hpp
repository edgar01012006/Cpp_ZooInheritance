#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <vector>
#include <string>
#include "AnimalAbstractions.hpp"


class Lion : public Mammal {
    private:
        int m_roarPower;      // 1..10
    public:
        Lion(const std::string& name, int roarPower, Kind kind = Kind::Lion) 
            : Mammal { name, kind }, m_roarPower { roarPower } {}
        void printInfo() const;
        void Roar() { std::cout << "Lion Roars with power" << m_roarPower << std::endl; }
};

class Tiger : public Mammal {
    private:
        double m_jumpHeight;        // km/h
    public:
        Tiger(const std::string& name, double jumpHeight, Kind kind = Kind::Tiger) 
            : Mammal { name, kind }, m_jumpHeight { jumpHeight } {}
        void printInfo() const;
        void jump() { std::cout << "Tiger's jump height is " << m_jumpHeight << std::endl; }
};

class Elephant : public Mammal {
    private:
        double m_trunkLength;
    public:
        Elephant(const std::string& name, double trunkLength, Kind kind = Kind::Elephant)
            : Mammal { name, kind }, m_trunkLength { trunkLength } {}
        void printInfo() const;
        void useTrunk() { std::cout << "Elephant uses its trunk" << std::endl; }
};

class Eagle : public Bird {
    private:
        double m_visionRange; // meters
    public:
        Eagle(const std::string& name, double wingSpan, double visionRange, Kind kind = Kind::Eagle)
            : Bird { name, wingSpan, kind }, m_visionRange { visionRange } {}
        void printInfo() const;
        void Soar() { std::cout << "The Eagle soares into the air\n"; }
};

class Parrot : public Bird {
    private:
        std::vector<std::string> m_vocabulary; // word it can "say"
    public:
        Parrot(const std::string& name, double wingSpan, const std::vector<std::string>& vocabulary, Kind kind = Kind::Parrot)
            : Bird { name, wingSpan, kind }, m_vocabulary { vocabulary } {}
        void printInfo() const;
        void Speak() {
            std::cout << "Parrot can say these words\n";
            for (const std::string& word: m_vocabulary) {
                std::cout << word << "\n";
            }
        };
};      

class Snake : public Reptile {
    private:
        bool m_poisonous;
    public:
        Snake(const std::string& name, bool poisonous, Kind kind = Kind::Snake)
            : Reptile { name, kind }, m_poisonous { poisonous } {}
        void printInfo() const;
        void Hiss() { std::cout << "Hissssssss" << std::endl; }
};

class Crocodile : public Reptile {
    private:
        int m_biteForce;
    public:
        Crocodile(const std::string& name, int biteForce, Kind kind = Kind::Crocodile)
            : Reptile { name, kind }, m_biteForce { biteForce } {}
        void printInfo() const;
        void Snap() { std::cout << "The crocodile snaps with " << m_biteForce << "power" << std::endl; }
};

#endif /* ANIMALS_HPP */