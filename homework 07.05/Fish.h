#pragma once
#include "Animal.h"
class Fish :
    public Animal
{
    bool deepsea;
public:
    Fish();
    Fish(string name,bool predator,bool deepsea);

    void setDeepsea(bool deepsea);
    bool getDeepsea()const;

    virtual void show()const override;

};

