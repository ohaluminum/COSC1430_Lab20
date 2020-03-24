//please dont change anything here
#include <string>
#include <iostream>
#include "Fruit.h"

using namespace std;

Fruit::Fruit() {
    name = "";
}

Fruit::Fruit(string name_) {
    name = name_;
}

void Fruit::setName(string name_) {
    name = name_;
}

string Fruit::getName() {
    return name;
}