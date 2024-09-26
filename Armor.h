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
    void getName() const override;
    void getItemtype() const override;
    void getDescription() const override;
    void getValue() const override;
    void getWeight() const override;
    void getEffects() const override;

    // Unique Getters
    void getDefense() const;
    void getSlot() const;

    void use() override;
};

