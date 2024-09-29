#pragma once
#include "iostream"
#include "string"
#include "map"
#include "raylib.h"

using namespace std;

class Item
{
protected: 
	string name;
	string itemType;
	string imgLocation;
	string description;
	int value;
	float weight;
	map<string, int> effects;

public:
	Item(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects);

	//Getters
	virtual string getName() const;

	virtual string getItemtype() const;

    string getImgLocation() const;

	string getDescription() const;

	int getValue() const;

	float getWeight() const;

	virtual map<string, int> getEffects() const;

	//Use the Item
	virtual string use();

	//Pure virtual function for unique attributes
	virtual string getAttributes() = 0;

	



};

