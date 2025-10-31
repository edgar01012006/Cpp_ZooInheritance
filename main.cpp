#include "include/AnimalAbstractions.hpp"
#include "include/Animals.hpp"

#include <vector>

int main() {
    Lion* simba = new Lion { "simba", 8 };
    Tiger* tony = new Tiger { "tony", 5 };
    Eagle* aquila = new Eagle { "aquila", 1.8, 300 };
    Snake* sly = new Snake { "sly", true };
    std::vector<Animal*> animals;
    animals.push_back(simba);
    animals.push_back(tony);
    animals.push_back(aquila);
    animals.push_back(sly);
    for (Animal* animal: animals) {
        animal->print();
    }
}