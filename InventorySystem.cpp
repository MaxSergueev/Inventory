#include "InventorySystem.h"
#include "Item.h"
#include "fstream"

//#include "Weapon.h"
//#include "Armor.h"
//#include "Accessories.h"
//#include "Potion.h"
//#include "Tool.h"
void InventorySystem::populateInventory() {
    ifstream file;
    file.open("<path of HEAPinput>");

    if (!file)
    {
        std::cout << "No items.txt file found";
        exit(0);
    }

    int i;
    while (file >> i)
        //Inventory.push_back(i);
    file.close();
}