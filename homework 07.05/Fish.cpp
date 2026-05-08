#include "Fish.h"

Fish::Fish()
{
    deepsea = false;
}

Fish::Fish(string name, bool predator, bool deepsea)
    :Animal(name,predator)
{
    this->deepsea = deepsea;
}

void Fish::setDeepsea(bool deepsea)
{
    this->deepsea = deepsea;
}

bool Fish::getDeepsea() const
{
    return deepsea;
}

void Fish::show() const
{
    Animal::show();
    std::cout << "Deepsea status: " << std::boolalpha << deepsea << std::endl;
}
