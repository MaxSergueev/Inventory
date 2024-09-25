#pragma once
#include "Accessories.h"
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Accessories::Accessories(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, string alignment, string slot)
    : Item(name, itemType, rarity, description, value, weight, effects), alignment(alignment), slot(slot) {}

void Accessories::use() {
    cout << "Equipped " << name << " to " << slot << " slot. " << "Changing your aligment towards the " << alignment << ". The effects of this accessory are: " << endl;
    for (auto const& p : effects)
    {
        std::cout << p.first << " buff " << p.second << '\n';
    }
}