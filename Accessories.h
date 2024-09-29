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
    string getName() const override;
    string getItemtype() const override;
    map<string, int> getEffects() const override;

    // Unique Getters
    string getAlignment() const;
    string getSlot() const;

    string use() override;

    string getAttributes() override;
};
