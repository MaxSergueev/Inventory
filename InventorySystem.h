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
	vector <Item*> Inventory; //* is to create an address for each child of item, otherwise children wouldn't be able to be stored here since they have different attribute sizes
	void populateInventory();

	//void listItems();
	//void help();
	//void initialMessage();
};

