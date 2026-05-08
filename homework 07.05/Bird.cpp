#include "Bird.h"

Bird::Bird()
{
    flightSpeed = 0;
}

Bird::Bird(string name, bool predator, int flightSpeed)
    :Animal(name, predator)
{
    this->flightSpeed = flightSpeed;
}

void Bird::setFlightSpeed(int flightSpeed)
{
    this->flightSpeed = flightSpeed;
}

bool Bird::getFlightSpeed() const
{
    return flightSpeed;
}

void Bird::show() const
{
    Animal::show();
    std::cout << "Flight Speed: " << flightSpeed << std::endl;
}
