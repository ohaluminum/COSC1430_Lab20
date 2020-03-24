#pragma once

#ifndef Fruit_h
#define Fruit_h
#include <string>

using namespace std;

class Fruit
{
private:
    string name;

public:
    Fruit();
    Fruit(string);
    void setName(string);
    string getName();
    ~Fruit() { setName("deleted"); }
    void operator delete(void* ptr) {/*do nothing for debug purpose*/ };
};

#endif
