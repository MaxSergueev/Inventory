#pragma once
#include "iostream"
#include "string"
#include "map"

using namespace std;

class Item
{
protected: 
	string name;
	string itemType;
	string rarity;
	string description;
	int value;
	float weight;
	map<string, int> effects;

public:
	Item(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects);

	//Getters
	virtual void getName() const;

	virtual void getItemtype() const;

	virtual void getRarity() const;

	virtual void getDescription() const;

	virtual void getValue() const;

	virtual void getWeight() const;

	virtual void getEffects() const;

	//Use the Item
	virtual void use();

	



};

