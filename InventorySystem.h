#pragma once
#include "string"
#include "map"
#include "vector"
#include "fstream"

#include "Item.h"

using namespace std;

class InventorySystem
{
public:
	InventorySystem();

	vector <Item*> inventory; //* is to create an address for each child of item, otherwise children wouldn't be able to be stored here since they have different attribute sizes
    vector <string> imageLocations; // move this to inventory systems

	//void populateImgsLocations(Item*);
	void populateInventory(Item*);
	void printInventory();
	void drawInventory();


	//void listItems();
	//void help();
	//void initialMessage();
};

