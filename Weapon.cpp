#include "Weapon.h"
#pragma once
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Weapon::Weapon(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int damage, int range)
    : Item(name, itemType, imgLocation, description, value, weight, effects), damage(damage), range(range) {}


// Getters
string Weapon::getName() const {
    return "this weapon is named: " + name;
}

string Weapon::getItemtype() const {
    return "this weapon is a " + itemType;
}

map<string, int> Weapon::getEffects() const {
    //cout << name << " has the following effects: " << endl;
    //for (auto const& p : effects)
    //{
    //    cout << p.first << " " << p.second << '\n';
    //}
    return effects;
}

int Weapon::getDamage() const {
    return damage;
}

int Weapon::getRange() const {
    return range;
}

// Use the weapon
string Weapon::use() {
    return "Swinging weapon: " + name + " with damage: " + to_string(damage) + " and range: " + to_string(range);
}
