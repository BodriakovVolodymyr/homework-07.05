#pragma once
#include <string>
using std::string;

class ZooException{
protected:
	string text;
public:
	ZooException(string text) { this->text = text; }
	virtual ~ZooException() {};
	virtual string showMessage()const = 0;

};

class NameException :public ZooException {
protected:
	string name;
public:
	NameException(string text, string name) :ZooException(text), name(name) {}

	virtual string showMessage()const override {
		return "Name Exception: " + text + " -> " + name;
	}
};

class HabitatException :public ZooException {
protected:
	string habitat;
public:
	HabitatException(string text, string habitat) :ZooException(text), habitat(habitat) {}

	virtual string showMessage()const override {
		return "Name Exception: " + text + " -> " + habitat;
	}
};

class MaxCapacityException :public ZooException {

public:
	MaxCapacityException(string text) :ZooException(text) {}

	virtual string showMessage()const override {
		return "Name Exception: " + text ;
	}


};
class PredatorException :public ZooException {

public:
	PredatorException(string text) :ZooException(text) {}

	virtual string showMessage()const override {
		return "Name Exception: " + text ;
	}
};


