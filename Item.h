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
	virtual void getName() const;

	virtual void getItemtype() const;

    string getImgLocation() const;

	virtual void getDescription() const;

	virtual void getValue() const;

	virtual void getWeight() const;

	virtual void getEffects() const;

	//Use the Item
	virtual void use();

	



};

