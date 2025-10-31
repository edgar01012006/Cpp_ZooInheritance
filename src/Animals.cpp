#include "include/Animals.hpp"

void Lion::printInfo() const {
    Mammal::printInfo();
    std::cout << "Roar Power: " << m_roarPower << std::endl;
}

void Tiger::printInfo() const {
    Mammal::printInfo();
    std::cout << "Jump Height: " << m_jumpHeight << std::endl;
}

void Eagle::printInfo() const {
    Bird::printInfo();
    std::cout << "Vision Range: " << m_visionRange << std::endl;
}

void Snake::printInfo() const {
    Reptile::printInfo();
    std::cout << "Poisonous: " << m_poisonous << std::endl;
}