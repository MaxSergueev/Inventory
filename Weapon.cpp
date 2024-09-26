#include "Weapon.h"
#pragma once
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Weapon::Weapon(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int damage, int range)
    : Item(name, itemType, imgLocation, description, value, weight, effects), damage(damage), range(range) {}


// Getters
void Weapon::getName() const {
    cout << "this weapon is named: " << name << endl;
}

void Weapon::getItemtype() const {
    cout << "This weapon is a " << itemType << "." << endl;
}

void Weapon::getDescription() const {
    cout << "Item description: " << description << endl;
}

void Weapon::getValue() const {
    cout << "This weapon is worth " << value << " coins." << endl;
}

void Weapon::getWeight() const {
    cout << "This weapon weighs " << weight << " Kgs." << endl;
}

void Weapon::getEffects() const {
    cout << name << " has the following effects: " << endl;
    for (auto const& p : effects)
    {
        cout << p.first << " " << p.second << '\n';
    }
}

void Weapon::getDamage() const {
    cout << name << " does " << damage << " damage." << endl;
}

void Weapon::getRange() const {
    cout << name << " has a range of " << range << endl;
}

// Use the weapon
void Weapon::use() {
    cout << "Swinging weapon: " << name << " with damage: " << damage << " and range: " << range << endl;
}
