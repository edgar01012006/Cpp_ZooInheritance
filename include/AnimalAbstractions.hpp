#ifndef ANIMALABSTRACTIONS_HPP
#define ANIMALABSTRACTIONS_HPP

#include <string>
#include <iostream>

class Animal {
    public:
        Animal(const std::string& name);
        virtual ~Animal() = default;
        void printInfo() const;
        int id() const { return m_id; }

    protected:
        std::string m_name;
        int m_id;
    private:
        static int nextId;
};

class IFly {
    public:
        virtual ~IFly() = 0;
        virtual void fly() = 0;
};

class ISwim {
    public:
        virtual ~ISwim() = 0;
        virtual void swim() = 0;
};

class IWalk {
    public:
        virtual ~IWalk() = 0;
        virtual void walk() = 0;
};

class IVoice {
    public:
        virtual ~IVoice() = 0;
        virtual void voice() = 0;
};

class IFeedable {
    public:
        virtual ~IFeedable() = 0;
        virtual void eat() = 0;
};


#endif /* ANIMALABSTRACTIONS_HPP */