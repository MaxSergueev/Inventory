#include "InventorySystem.h"
#include "Item.h"
#include "iostream"
#include "fstream"

using namespace std;

InventorySystem::InventorySystem(){}

void InventorySystem::populateInventory(Item* item){

	inventory.push_back(item);
}

void InventorySystem::printInventory() {
	for (size_t i = 0; i < inventory.size(); i++)
	{
		inventory[i]->getName();
	}
}