#pragma once
#include "Potion.h"
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Potion::Potion(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, int uses, int efficiency)
    : Item(name, itemType, rarity, description, value, weight, effects), uses(uses), efficiency(efficiency) {}

// Getters
void Potion::getName() const {
    cout << "this potion is named: " << name << endl;
}

void Potion::getItemtype() const {
    cout << "This potion is a " << itemType << "." << endl;
}

void Potion::getRarity() const {
    cout << "This potion is " << rarity << "." << endl;
}

void Potion::getDescription() const {
    cout << "Item description: " << description << endl;
}

void Potion::getValue() const {
    cout << "This potion is worth " << value << " coins." << endl;
}

void Potion::getWeight() const {
    cout << "This potion weighs " << weight << " Kgs." << endl;
}

void Potion::getEffects() const {
    cout << name << " has the following effects: " << endl;
    for (auto const& p : effects)
    {
        cout << p.first << " " << p.second << '\n';
    }
}

void Potion::getUses() const {
    cout << name << " has " << uses << " uses left." << endl;
}

void Potion::getEfficiency() const {
    cout << name << " deals " << efficiency << " points per second per when used." << endl;
}

void Potion::use() {
    uses -= 1;
    cout << "Drank " << name << ". " << uses - 1 << " uses left." << endl;
    for (auto const& p : effects)
    {
        std::cout << p.first << " for " << p.second << " seconds. " << efficiency << " points per second." << '\n';
    }

}