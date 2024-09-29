#pragma once
#include "iostream"
#include "string"
#include "Item.h"

using namespace std;


class Armor : public Item {
private:
    int defense;
    string slot;

public:
    Armor(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int defense, string slot);

    // Inherited Getters
    string getName() const override;
    string getItemtype() const override;
    map<string, int> getEffects() const override;

    // Unique Getters
    int getDefense() const;
    string getSlot() const;

    string use() override;

    string getAttributes() override;
};

