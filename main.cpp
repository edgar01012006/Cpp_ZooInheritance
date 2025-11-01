#include "Animals.hpp"

#include <vector>

int main() {
    
    Lion* simba = new Lion { "simba", 8 };
    Tiger* tony = new Tiger { "tony", 5 };
    Elephant* ole = new Elephant { "ole", 30 };
    Eagle* aquila = new Eagle { "aquila", 1.8, 300 };
    std::vector<std::string> vocabulary { "Hello", "Bye", "Boooooo" };
    Parrot* paro = new Parrot { "paro", 3.2, vocabulary };
    Snake* sly = new Snake { "sly", true };
    Crocodile* capo = new Crocodile { "capo", 5 };
    std::vector<Animal*> animals;

    animals.push_back(simba);
    animals.push_back(tony);
    animals.push_back(ole);
    animals.push_back(aquila);
    animals.push_back(paro);
    animals.push_back(sly);
    animals.push_back(capo);

    for (Animal* animal: animals) {
        animal->print();
    }
}