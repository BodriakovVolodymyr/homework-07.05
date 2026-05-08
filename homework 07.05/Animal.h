#pragma once
#include "ZooException.h"
#include <iostream>
#include<string>

class Animal
{
	std::string name;
	bool predator;
public:
	Animal();
	Animal(std::string name, bool predator);
	virtual~Animal();

	void setName(std::string name);
	void setPredator(bool predator);

	std::string getName()const;
	bool getPredator()const;

	virtual void show()const;
};

