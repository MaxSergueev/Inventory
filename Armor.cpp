#pragma once
#include "Armor.h"
#include "iostream"
#include "string"
#include "Item.h"
using namespace std;

Armor::Armor(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, int defense, string slot)
    : Item(name, itemType, rarity, description, value, weight, effects), defense(defense), slot(slot) {}


// Getters
void Armor ::getName() const {
    cout << "this armor is named: " << name << endl;
}

void Armor::getItemtype() const {
    cout << "This armor is a " << itemType << "." << endl;
}

void Armor::getRarity() const {
    cout << "This armor is " << rarity << "." << endl;
}

void Armor::getDescription() const {
    cout << "Item description: " << description << endl;
}

void Armor::getValue() const {
    cout << "This armor is worth " << value << " coins." << endl;
}

void Armor::getWeight() const {
    cout << "This armor weighs " << weight << " Kgs." << endl;
}

void Armor::getEffects() const {
    cout << name << " has the following effects: " << endl;
    for (auto const& p : effects)
    {
        cout << p.first << " " << p.second << '\n';
    }
}

void Armor::getDefense() const {
    cout << "This armor has a physical resistance of " << defense << "." << endl;
}

void Armor::getSlot()const {
    cout << "This armor is worn in the " << slot << " slot." << endl;
}

// Use the armor
void Armor::use() {
    cout << "Equipped " << name << " to " << slot << " slot. " << "Granting " << defense << " Physical defense, as well as: " << endl;
    for (auto const& p : effects)
    {
        std::cout << p.first << " resistance " << p.second << '\n';
    }

}
