#include <iostream>

#include "Cage.h"

#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"

#include "ZooException.h"

int main()
{
	//~~~~~~~~~~~~~~~~~~~~~Aquarium~~~~~~~~~~~~~~~~~~~~
	try {
		Cage aquarium(1, 3);
		aquarium.addAnimal(new Fish("Clown", false, false));
		aquarium.addAnimal(new Fish("Guppy", false, false));
		
		aquarium.showAll();

		aquarium.addAnimal(new Fish("Ceratioidei", true, true));
	}
	catch (ZooException& ex)
	{
		std::cout << ex.showMessage() << std::endl;
	}
	try {

	}
}
