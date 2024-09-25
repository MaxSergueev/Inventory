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
    Armor(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, int defense, string slot);

    void use() override;
};

