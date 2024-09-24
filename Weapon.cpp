#include "Weapon.h"
#pragma once
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Weapon::Weapon(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, int damage, int range)
    : Item(name, itemType, rarity, description, value, weight, effects), damage(damage), range(range) {}

int Weapon::getDamage() const {
    return damage;
}

int Weapon::getRange() const {
    return range;
}

void Weapon::use() {
    cout << "Swinging weapon: " << name << " with damage: " << damage << " and range: " << range << endl;
}
