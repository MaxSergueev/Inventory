#pragma once
#include "Armor.h"
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Armor::Armor(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int defense, string slot)
    : Item(name, itemType, imgLocation, description, value, weight, effects), defense(defense), slot(slot) {}


// Getters
string Armor ::getName() const {
    return "this armor is named: " + name;
}

string Armor::getItemtype() const {
    return "This armor is a " + itemType + ".";
}

map<string, int> Armor::getEffects() const {
    /*cout << name << " has the following effects: " << endl;
    for (auto const& p : effects)
    {
        cout << p.first << " " << p.second << '\n';
    }*/
    return effects;
}

// Unique Getters
int Armor::getDefense() const {
    cout << "This armor has a physical resistance of " << defense << "." << endl;
    return defense;
}

string Armor::getSlot()const {
    return "This armor is worn in the " + slot + " slot.";
}

//Virtual functions
string Armor::use() {
    return "Equipped " + name + " to " + slot + " slot. " + "Granting " + to_string(defense) + " physical defense.";

}

string Armor::getAttributes() {
    return "This armor's physical defense is " + to_string(defense) + " and it is equipped in the " + slot + " slot";
}
