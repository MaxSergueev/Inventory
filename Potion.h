#pragma once
#include "iostream"
#include "string"
#include "Item.h"

using namespace std;


class Potion : public Item {
private:
    int uses;
    int efficiency;

public:
    Potion(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int uses, int efficiency);

    //Inherited Getters
    void getName() const override;
    void getItemtype() const override;
    void getDescription() const override;
    void getValue() const override;
    void getWeight() const override;
    void getEffects() const override;

    //Unique Getters
    void getUses() const;
    void getEfficiency() const;

    void use() override;
};

