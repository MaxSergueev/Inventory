#pragma once
#include "Accessories.h"
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Accessories::Accessories(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, string alignment, string slot)
    : Item(name, itemType, imgLocation, description, value, weight, effects), alignment(alignment), slot(slot) {}

// Getters
string Accessories::getName() const {
    return "this accessory is named: " + name;
}

string Accessories::getItemtype() const {
    return "this accessory is a " + itemType;
}

map<string, int> Accessories::getEffects() const {
    /*cout << name << " has the following effects: " << endl;
    for (auto const& p : effects)
    {
        cout << p.first << " " << p.second << '\n';
    }*/

    return effects;
}

// Unique Getters
string Accessories::getAlignment() const {
    return "Wearing " + name + " increases your alignment towards the " + alignment;
}

string Accessories::getSlot() const {
    return name + " is worn in the " + slot + " slot.";
}

// Virtual functions
string Accessories::use() {
    return "Equipped: " + name + " to " + slot + " slot. Changing your alignment towards the " + alignment; // can maybe add effects list
}

string Accessories::getAttributes() {
    return "Worn in the " + slot + " slot, changing your alignment to the " + alignment;
}