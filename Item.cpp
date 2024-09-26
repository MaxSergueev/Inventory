#include "Item.h"  
#include <iostream> 
#include <map>      
#include <string>   

using namespace std;


Item::Item(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects)
    : name(name), itemType(itemType), imgLocation(imgLocation), description(description), value(value), weight(weight), effects(effects) {
}

//Getters
void Item::getName() const {
    cout << "This item is called: " << name << endl;
}

void Item::getItemtype() const {
    cout << "This item is a: " << itemType << endl;
}

string Item::getImgLocation() const {
    return imgLocation;
}

void Item::getDescription() const {
    cout << description << endl;
}

void Item::getValue() const {
    cout << name << " is worth " << value << "coins" << endl;
}

void Item::getWeight() const {
    cout << name << " weighs " << weight << "Kgs" << endl;
}

void Item::getEffects() const {
    for (auto const& p : effects)
    {
        std::cout << p.first << ' ' << p.second << '\n';
    }
}

void Item::use() {
    cout << "Using item: " << name << endl;
}