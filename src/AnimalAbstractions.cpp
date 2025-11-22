#include "AnimalAbstractions.hpp"
#include "Animals.hpp"

int Animal::nextId = 0;

Animal::Animal(const std::string& name)
    : m_id { ++nextId }, m_name { name } {}

void Animal::printInfo() const {
    std::cout << "Id: " << m_id << "\n";
    std::cout << "Name: " << m_name << "\n";
} 

IFly::~IFly() {};
ISwim::~ISwim() {};
IWalk::~IWalk() {};
IVoice::~IVoice() {};
IFeedable::~IFeedable() {};