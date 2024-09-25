#pragma once
#include "Armor.h"
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Armor::Armor(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, int defense, string slot)
    : Item(name, itemType, rarity, description, value, weight, effects), defense(defense), slot(slot) {}

void Armor::use() {
    cout << "Equipped " << name << " to " << slot << " slot. " << "Granting " << defense << " Physical defense, as well as: " << endl;
    for (auto const& p : effects)
    {
        std::cout << p.first << " resistance " << p.second << '\n';
    }

}
