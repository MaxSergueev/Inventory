#include "Item.h"  
#include <iostream> 
#include <map>      
#include <string>   

using namespace std;


Item::Item(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects)
    : name(name), itemType(itemType), imgLocation(imgLocation), description(description), value(value), weight(weight), effects(effects) {
}

//Getters
string Item::getName() const {
    return "this item is named: " + name;
}

string Item::getItemtype() const {
    return "this item is a: " + itemType;
}

string Item::getImgLocation() const {
    return imgLocation;
}

string Item::getDescription() const {
    return "Item description: " + description;
}

int Item::getValue() const {
    return value;
}

float Item::getWeight() const {
    return weight;
}

map<string, int> Item::getEffects() const {
    /*for (auto const& p : effects)
    {
        std::cout << p.first << ' ' << p.second << '\n';
    }*/
    return effects;
}

string Item::use() {
    return "Using item: " + name;
}