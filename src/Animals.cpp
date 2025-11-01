#include "Animals.hpp"

void Lion::printInfo() const {
    Mammal::printInfo();
    std::cout << "Roar Power: " << m_roarPower << std::endl;
}

void Tiger::printInfo() const {
    Mammal::printInfo();
    std::cout << "Jump Height: " << m_jumpHeight << std::endl;
}

void Elephant::printInfo() const {
    Mammal::printInfo();
    std::cout << "Trunk length: " << m_trunkLength << std::endl;
}

void Eagle::printInfo() const {
    Bird::printInfo();
    std::cout << "Vision Range: " << m_visionRange << std::endl;
}

void Parrot::printInfo() const {
    Bird::printInfo();
    std::cout << "vocabulary contains: " << m_vocabulary.size() << " words" << std::endl;
}

void Snake::printInfo() const {
    Reptile::printInfo();
    std::cout << "Poisonous: " << m_poisonous << std::endl;
}

void Crocodile::printInfo() const {
    Reptile::printInfo();
    std::cout << "Bite Force: " << m_biteForce << std::endl;
}