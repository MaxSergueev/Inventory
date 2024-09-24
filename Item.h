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

	virtual void use();

	



};

