#pragma once
#include "Animal.h"
class Mammal :
    public Animal
{
    string habitat;
public:
    Mammal();
    Mammal(string name, bool predator, string habitat);

    void setHabitat(string habitat);
    string getHabitat()const;

    virtual void show()const override;

};