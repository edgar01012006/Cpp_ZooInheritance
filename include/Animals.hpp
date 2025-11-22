#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <vector>
#include <string>
#include "AnimalAbstractions.hpp"


class Lion : public Animal, public IWalk, public IVoice, public IFeedable {
    public:
        Lion(const std::string& name) : Animal { name } {}
        ~Lion() = default;
    
        void walk() override { std::cout << "Lion walking\n"; }
        void voice() override { std::cout << "Lion voice\n"; }
        void eat() override { std::cout << "Lion eating\n"; }
};

class Tiger : public Animal, public IWalk, public IVoice, public IFeedable{
    public:
        Tiger(const std::string& name) : Animal { name } {}
        ~Tiger() = default;

        void walk() override { std::cout << "Tiger walking\n"; }
        void voice() override { std::cout << "Tiger voice\n"; }
        void eat() override { std::cout << "Tiger eating\n"; }
};

class Elephant : public Animal, public IWalk, public IVoice, public IFeedable{
    public:
        Elephant(const std::string& name) : Animal { name } {}
        ~Elephant() = default;

        void walk() override { std::cout << "Elephant walking\n"; }
        void voice() override { std::cout << "Elephant voice\n"; }
        void eat() override { std::cout << "Elephant eating\n"; }
};

class Eagle : public Animal, public IFly, public IWalk, public IVoice, public IFeedable{
    public:
        Eagle(const std::string& name) : Animal { name } {}
        ~Eagle() = default;

        void fly() override { std::cout << "Eagle flying\n"; }
        void walk() override { std::cout << "Eagle walking\n"; }
        void voice() override { std::cout << "Eagle voice\n"; }
        void eat() override { std::cout << "Eagle eating\n"; }
};

class Parrot : public Animal, public IFly, public IWalk, public IVoice, public IFeedable {
    public:
        Parrot(const std::string& name) : Animal { name } {}
        ~Parrot() = default;

        void fly() override { std::cout << "Parrot flying\n"; }
        void walk() override { std::cout << "Parrot walking\n"; }
        void voice() override { std::cout << "Parrot voice\n"; }
        void eat() override { std::cout << "Parrot eating\n"; }
};      

class Snake : public Animal, public IWalk, public IVoice, public IFeedable {
    public:
        Snake(const std::string& name) : Animal { name } {}
        ~Snake() = default;

        void walk() override { std::cout << "Snake walking\n"; }
        void voice() override { std::cout << "Snake voice\n"; }
        void eat() override { std::cout << "Snake eating\n"; }

};

class Crocodile : public Animal, public IWalk, public ISwim, public IVoice, public IFeedable {
    public:
        Crocodile(const std::string& name) : Animal { name } {}
        ~Crocodile() = default;

        void walk() override { std::cout << "Crocodile walking\n"; }
        void swim() override { std::cout << "Crocodile swimming\n"; }
        void voice() override { std::cout << "Crocodile voice\n"; }
        void eat() override { std::cout << "Crocodile eating\n"; }
};

#endif /* ANIMALS_HPP */