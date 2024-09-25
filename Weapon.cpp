#include "Weapon.h"
#pragma once
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Weapon::Weapon(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, int damage, int range)
    : Item(name, itemType, rarity, description, value, weight, effects), damage(damage), range(range) {}

void Weapon::getName() const {
    cout << "this weapon is named: " << name << endl;
}
void Weapon::getDamage() const {
    cout << name << " does " << damage << " damage." << endl;
}

void Weapon::getRange() const {
    cout << name << " has a range of " << range << endl;
}

void Weapon::use() {
    cout << "Swinging weapon: " << name << " with damage: " << damage << " and range: " << range << endl;
}
