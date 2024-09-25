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
    Accessories(string name, string itemType, string rarity, string description, int value, float weight, map<string, int> effects, string alignment , string slot);

    void use() override;
};
