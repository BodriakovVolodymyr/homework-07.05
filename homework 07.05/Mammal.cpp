#include "Mammal.h"

Mammal::Mammal()
{
	habitat = "No info";
}

Mammal::Mammal(string name, bool predator, string habitat)
	:Animal(name, predator)
{
	setHabitat(habitat);
}

void Mammal::setHabitat(string habitat)
{
	if (habitat.empty())
		throw HabitatException("Habitat info", "Empty");
}

string Mammal::getHabitat() const
{
	return habitat;
}

void Mammal::show() const
{
	Animal::show();
	std::cout << "Habitat: " << habitat << std::endl;
}
