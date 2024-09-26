#pragma once
#include "Accessories.h"
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Accessories::Accessories(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, string alignment, string slot)
    : Item(name, itemType, imgLocation, description, value, weight, effects), alignment(alignment), slot(slot) {}

// Getters
void Accessories::getName() const {
    cout << "this accessory is named: " << name << endl;
}

void Accessories::getItemtype() const {
    cout << "This accessory is a " << itemType << "." << endl;
}

void Accessories::getDescription() const {
    cout << "Item description: " << description << endl;
}

void Accessories::getValue() const {
    cout << "This accessory is worth " << value << " coins." << endl;
}

void Accessories::getWeight() const {
    cout << "This accessory weighs " << weight << " Kgs." << endl;
}

void Accessories::getEffects() const {
    cout << name << " has the following effects: " << endl;
    for (auto const& p : effects)
    {
        cout << p.first << " " << p.second << '\n';
    }
}

void Accessories::getAlignment() const {
    cout << "Wearing " << name << " increases your alignment towards the " << alignment << endl;
}

void Accessories::getSlot() const {
    cout << name << " is worn in the " << slot << " slot." << endl;
}

void Accessories::use() {
    cout << "Equipped " << name << " to " << slot << " slot. " << "Changing your aligment towards the " << alignment << ". The effects of this accessory are: " << endl;
    for (auto const& p : effects)
    {
        std::cout << p.first << " buff " << p.second << '\n';
    }
}