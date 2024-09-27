#pragma once
#include "Potion.h"
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Potion::Potion(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int uses, int efficiency)
    : Item(name, itemType, imgLocation, description, value, weight, effects), uses(uses), efficiency(efficiency) {}

// Getters
string Potion::getName() const {
    return "this potion is named: " + name;
}

string Potion::getItemtype() const {
    return "This potion is a " + itemType;

}

map<string, int> Potion::getEffects() const {
    /*cout << name << " has the following effects: " << endl;
    for (auto const& p : effects)
    {
        cout << p.first << " " << p.second << '\n';
    }*/
    return effects;
}

int Potion::getUses() const {
    //cout << name << " has " << uses << " uses left." << endl;

    return uses;
}

int Potion::getEfficiency() const {
    //cout << name << " deals " << efficiency << " points per second per when used." << endl;

    return efficiency;
}

string Potion::use() {
    /*uses -= 1;
    cout << "Drank " << name << ". " << uses - 1 << " uses left." << endl;
    for (auto const& p : effects)
    {
        std::cout << p.first << " for " << p.second << " seconds. " << efficiency << " points per second." << '\n';
    }*/
    return "Drank " + name;

}