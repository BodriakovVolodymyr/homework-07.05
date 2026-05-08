#include "Animal.h"

Animal::Animal()
{
    name = "none";
    predator = false;
}

Animal::Animal(std::string name, bool predator)
{
    setName(name);
    setPredator(predator);
}

Animal::~Animal()
{
}

void Animal::setName(std::string name)
{
    if (name.empty())
        throw NameException("Empty string", "Empty");

    this->name = name;
}

void Animal::setPredator(bool predator)
{
    this->predator = predator;
}

std::string Animal::getName() const
{
    return name;
}

bool Animal::getPredator() const
{
    return predator;
}

void Animal::show() const
{
    std::cout << "Animal name: " << name << std::endl;
    std::cout << "Predator status: " << std::boolalpha << predator << std::endl;
}
