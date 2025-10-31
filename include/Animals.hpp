#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include "AnimalAbstractions.hpp"

class Lion : public Mammal {
    private:
        int m_roarPower;      // 1..10
    public:
        Lion(const std::string& name, int roarPower, const Kind& kind = Kind::Lion) 
            : Mammal { name, kind }, m_roarPower { roarPower } {}
        void printInfo() const;
        void Roar() { std::cout << "Lion Roars with power" << m_roarPower << std::endl; }
};

class Tiger : public Mammal {
    private:
        double m_jumpHeight;        // km/h
    public:
        Tiger(const std::string& name, double jumpHeight, const Kind& kind = Kind::Tiger) 
            : Mammal { name, kind }, m_jumpHeight { jumpHeight } {}
        void printInfo() const;
        void jump() { std::cout << "Tiger's jump height is " << m_jumpHeight << std::endl; }
};

class Eagle : public Bird {
    private:
        double m_visionRange; // meters
    public:
        Eagle(const std::string& name, double wingSpan, double visionRange, const Kind& kind = Kind::Eagle)
            : Bird { name, wingSpan, kind }, m_visionRange { visionRange } {}
        void printInfo() const;
        void Soar() { std::cout << "The Eagle soares into the air\n"; }
};

class Snake : public Reptile {
    private:
        bool m_poisonous;
    public:
        Snake(const std::string& name, bool poisonous, const Kind& kind = Kind::Snake)
            : Reptile { name, kind }, m_poisonous { poisonous } {}
        void printInfo() const;
        void Hiss() { std::cout << "Hissssssss" << std::endl; }
};

#endif /* ANIMALS_HPP */