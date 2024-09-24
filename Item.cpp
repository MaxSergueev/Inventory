#include "Item.h"  
#include <iostream> 
#include <map>      
#include <string>   

using namespace std;


Item::Item(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects)
    : name(name), itemType(itemType), rarity(rarity), description(description), value(value), weight(weight), effects(effects) {
}


void Item::use() {
    cout << "Using item: " << name << endl;
}