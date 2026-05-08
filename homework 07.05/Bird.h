#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
    int flightSpeed;
public:
    Bird();
    Bird(string name, bool predator, int flightSpeed);

    void setFlightSpeed(int flightSpeed);
    bool getFlightSpeed()const;

    virtual void show()const override;

};