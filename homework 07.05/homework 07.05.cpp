#include <iostream>

#include "Cage.h"

#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"

#include "ZooException.h"

int main()
{
	//std::cout << "~~~~~~~~~~~~~~~~~~~~~Aquarium~~~~~~~~~~~~~~~~~~~~" << std::endl;
	//try {
	//	Cage aquarium(1, 3); 
	//	aquarium.addAnimal(new Fish("Clown", false, false));
	//	aquarium.addAnimal(new Fish("Guppy", false, false));
	//	aquarium.addAnimal(new Fish("Betta splendens", false, false));
	//	
	//	aquarium.showAll();
	//	// ~~~~~~~~~~~~~~~~~Lines for tests~~~~~~~~~~~~~~~~~~~~~~~
	//	//aquarium.addAnimal(new Fish("", false, false));
	//	//aquarium.addAnimal(new Fish("Guppy", false, false));
	//	//aquarium.addAnimal(new Fish("Ceratioidei", true, true));
	//}
	//catch (ZooException& ex)
	//{
	//	std::cout << ex.showMessage() << std::endl;
	//}
	

	//std::cout << "~~~~~~~~~~~~~~~~~~~~~Bird Cage~~~~~~~~~~~~~~~~~~~~" << std::endl;
	//try {
	//	Cage BirdCage(1, 3);
	//	BirdCage.addAnimal(new Bird("Eagle", true, 120));
	//	BirdCage.addAnimal(new Bird("Peregrine", true, 350));
	//	BirdCage.addAnimal(new Bird("Merlin", true, 100));

	//	BirdCage.showAll();
	//	// ~~~~~~~~~~~~~~~~~Lines for tests~~~~~~~~~~~~~~~~~~~~~~~
	//	//BirdCage.addAnimal(new Bird("", true, 100));
	//	//BirdCage.addAnimal(new Bird("Falcon", true, 240));
	//	//BirdCage.addAnimal(new Bird("dove", false, 100));
	//}
	//catch (ZooException& ex)
	//{
	//	std::cout << ex.showMessage() << std::endl;
	//}
	 
	
	try {
		Cage Cage(1, 3);
		Cage.addAnimal(new Mammal("Carpathian wolf", true, "Carpathian region"));
		Cage.addAnimal(new Mammal("Fox", true, "everywhere in the Northern Hemisphere"));
		Cage.addAnimal(new Mammal("Brown bear", true, "Carpathian region"));

		Cage.showAll();
		// ~~~~~~~~~~~~~~~~~Lines for tests~~~~~~~~~~~~~~~~~~~~~~~
		//Cage.addAnimal(new Mammal("", true, "Carpathian region"));
		//Cage.addAnimal(new Mammal("Lynx", true, "Carpathian region"));
		//Cage.addAnimal(new Mammal("Rabbit", false, "Carpathian region"));

		//~~~~~~~~~~~~~~~~~~Find~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		//Animal* to_find = Cage.findAnimal("Fox");
		//if (to_find != nullptr)
		//{
		//	std::cout << "Animal found: " << std::endl;
		//	to_find->show();
		//}
		//else 
		//{
		//std::cout<<"Animal not find in ou zoo" << std::endl;
		//}


		//~~~~~~~~~~~~~~~~~~Delete~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		std::cout << "Animal list after del" << std::endl;
		Cage.delAnimal("Fox");
		Cage.showAll();

	}
	catch (ZooException& ex)
	{
		std::cout << ex.showMessage() << std::endl;
	}
}
