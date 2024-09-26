#pragma once
#include "iostream"
#include "string"
#include "Item.h"

using namespace std;


class Accessories : public Item {
private:
    string alignment;
    string slot;

public:
    Accessories(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, string alignment , string slot);

    // Inherited Getters
    void getName() const override;
    void getItemtype() const override;
    void getDescription() const override;
    void getValue() const override;
    void getWeight() const override;
    void getEffects() const override;

    // Unique Getters
    void getAlignment() const;
    void getSlot() const;

    void use() override;
};
