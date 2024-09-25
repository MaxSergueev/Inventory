#pragma once
#include "Potion.h"
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Potion::Potion(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, int uses, int efficiency)
    : Item(name, itemType, rarity, description, value, weight, effects), uses(uses), efficiency(efficiency) {}

void Potion::use() {
    uses -= 1;
    cout << "Drank " << name << ". " << uses - 1 << " uses left." << endl;
    for (auto const& p : effects)
    {
        std::cout << p.first << " for " << p.second << " seconds." << '\n';
    }

}