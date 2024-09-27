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
    string getName() const override;
    string getItemtype() const override;
    map<string, int> getEffects() const override;

    //Unique Getters
    int getUses() const;
    int getEfficiency() const;

    string use() override;
};

