#pragma once
#include "Tool.h"
#include "iostream"
#include "string"
#include "Item.h"

using namespace std;

Tool::Tool(string name, string itemType, string imgLocation, string description, int value, float weight, map<string, int> effects, int efficiency, string function)
    : Item(name, itemType, imgLocation, description, value, weight, effects), efficiency(efficiency), function(function) {}

// Getters
string Tool::getName() const {
    return "this tool is named: " + name;
}

string Tool::getItemtype() const {
    return "this is a " + itemType + " tool.";
}

map<string, int> Tool::getEffects() const {
    //cout << name << " has the following effects: " << endl;
    //for (auto const& p : effects)
    //{
    //    cout << p.first << " " << p.second << '\n';
    //}

    return effects;
}

int Tool::getEfficiency() const{
    return efficiency;
}

// Unique Getters
string Tool::getFunction() const {
    return name + " is used for " + function;
}

// Virtual Function
string Tool::use() {
    return "You used your " + name + " to " + function + ". It's efficiency is " + to_string(efficiency);
}

string Tool::getAttributes() {
    return "This tool is for " + function + ". It's efficiency is " + to_string(efficiency);
}