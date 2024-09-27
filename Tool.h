#pragma once
#include "iostream"
#include "string"
#include "Item.h"

using namespace std;


class Tool : public Item {
private:
    int efficiency;
    string function;

public:
    Tool (string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int efficiency, string function);

    //Inherited Getters
    string getName() const override;
    string getItemtype() const override;
    map<string, int> getEffects() const override;

    //Unique Getters
    int getEfficiency() const;
    string getFunction() const;

    string use() override;
};

