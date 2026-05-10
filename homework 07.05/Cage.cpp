#include "Cage.h"

Cage::Cage()
{
    number = 0;
    maxAnimals = 0;
}

Cage::Cage(int number, int maxAnimals)
{
    this->number = number;
    this->maxAnimals = maxAnimals;
}

Cage::~Cage()
{
    for (auto a : animals)
    {
        delete a;
    }

    animals.clear();
}

void Cage::setNumber(int number)
{
    this->number = number;
}

void Cage::setMaxAnimals(int maxAnimals)
{
    this->maxAnimals = maxAnimals;
}

int Cage::getNumbers() const
{
    return number;
}

int Cage::getMaxAnimals() const
{
    return maxAnimals;
}

int Cage::getCurrentAnimals() const
{
    return 0;
}

void Cage::addAnimal(Animal* animal)
{
    if (animals.size() >= maxAnimals)
    {
        throw MaxCapacityException("Cage is full");
    }
   for (auto a : animals)
        {
            if (a->getPredator() != animal->getPredator())
            {
                throw PredatorException("Predators and non-predators cannot live together");
            }
        }
    
    animals.push_back(animal);
}

void Cage::delAnimal(std::string name)
{
    for (int i = 0; i < animals.size(); i++)
    {
        if (animals[i]->getName() == name)
        {
            delete animals[i];

            animals.erase(animals.begin() + i);

            return;
        }
    }
}

Animal* Cage::findAnimal(std::string name)
{
    for (auto a : animals)
    {
        if (a->getName() == name)
            return a;
    }

    return nullptr;
}

void Cage::showAll() const
{
    for (auto a : animals)
    {
        a->show();
        std::cout << std::endl;
    }
}
