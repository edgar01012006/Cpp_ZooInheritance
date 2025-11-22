#include "Animals.hpp"

#include <vector>

int main() {
    
    Lion* lion = new Lion { "lion" };
    Tiger* tiger = new Tiger { "tiger"};
    Elephant* elephant = new Elephant { "elephant" };
    Eagle* eagle = new Eagle { "eagle" };
    Parrot* parrot = new Parrot { "parrot" };
    Snake* snake = new Snake { "snake" };
    Crocodile* crocodile = new Crocodile { "crocodile" };
    std::vector<Animal*> animals;

    animals.push_back(lion);
    animals.push_back(tiger);
    animals.push_back(elephant);
    animals.push_back(eagle);
    animals.push_back(parrot);
    animals.push_back(snake);
    animals.push_back(crocodile);

    for (Animal* animal: animals) {
        std::cout << "\n";

        if (IFly* ptr = dynamic_cast<IFly*>(animal)) { ptr->fly(); std::cout << "\n"; }

        if (ISwim* ptr = dynamic_cast<ISwim*>(animal)) { ptr->swim(); std::cout << "\n"; }

        if (IWalk* ptr = dynamic_cast<IWalk*>(animal)) { ptr->walk(); std::cout << "\n";}

        if (IVoice* ptr = dynamic_cast<IVoice*>(animal)) { ptr->voice(); std::cout << "\n"; }

        if (IFeedable* ptr = dynamic_cast<IFeedable*>(animal)) { ptr->eat(); std::cout << "\n"; }

    }

    delete lion;
    delete tiger;
    delete elephant;
    delete eagle;
    delete parrot;
    delete snake;
    delete crocodile;
}