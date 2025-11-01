#include "AnimalAbstractions.hpp"
#include "Animals.hpp"

int Animal::nextId = 0;

Animal::Animal(const std::string& name, Kind kind)
    : m_id { ++nextId }, m_name { name }, m_health { 100 }, m_hunger { 0 }, m_kind { kind } {}

void Animal::print() const {
    switch (m_kind) {
        case Kind::Lion: static_cast<const Lion&>(*this).printInfo(); return;
        case Kind::Tiger: static_cast<const Tiger&>(*this).printInfo(); return;
        case Kind::Elephant: static_cast<const Elephant&>(*this).printInfo(); return;
        case Kind::Eagle: static_cast<const Eagle&>(*this).printInfo(); return;
        case Kind::Parrot: static_cast<const Parrot&>(*this).printInfo(); return;
        case Kind::Snake: static_cast<const Snake&>(*this).printInfo(); return;
        case Kind::Crocodile: static_cast<const Crocodile&>(*this).printInfo(); return;
        default: break;
    }
}

void Animal::printInfo() const {
    std::cout << "Id: " << m_id << "\n";
    std::cout << "Name: " << m_name << "\n";
    //std::cout << "Health: " << m_health << "\n";
    //std::cout << "Hunger: " << m_hunger << "\n";
} 

/*void Animal::feed() {
    if (m_hunger == 0) {
        std::cout << "Animal is not hungry\n";
        return;
    }
    m_health = 100;
    m_hunger = 0;
}*/

void Mammal::printInfo() const { 
    Animal::printInfo();
    std::cout << "WarmBlooded: " << m_warmBlooded << std::endl; 
}

void Bird::printInfo() const { 
    Animal::printInfo();
    std::cout << "WingSpan: " << m_wingSpan << std::endl; 
}

void Reptile::printInfo() const { 
    Animal::printInfo();
    std::cout << "ColdBlooded: " << m_coldBlooded << std::endl; 
}