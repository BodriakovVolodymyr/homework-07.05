#pragma once
#include<vector>
#include"Animal.h"
class Cage
{
	int number;
	int maxAnimals;

	std::vector<Animal*> animals;

public:
	Cage();
	Cage(int number, int maxAnimals);

	~Cage();
	void setNumber(int number);
	void setMaxAnimals(int maxAnimals);

	int getNumbers()const;
	int getMaxAnimals()const;

	int getCurrentAnimals()const;

	void addAnimal(Animal* animal);
	void delAnimal(std::string name);
	Animal* findAnimal(std::string name);

	void showAll()const;
};

