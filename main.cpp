#include <iostream>
#include "Fruit.h"

using namespace std;

/*
 *createFruit(string name)
 *This function takes in a string argument, 
 *initialize a Fruit pointer, 
 *dynamically allocates a new Fruit object, 
 *and return that new pointer.
 */
Fruit* createFruit(string name) 
{
    Fruit* ptr = new Fruit(name);

    return ptr;
}

/*
 *deleteFruit()
 *This function takes a Fruit pointer (that points to a Fruit object) and deallocates it's memory. 
 *It returns nothing (void).
 */
void deleteFruit(Fruit* ptr) {
    delete ptr;
    ptr = nullptr;
}

/*
 *createEmptyFruitArray(int num)
 *This function initializes a new Fruit pointer and allocates a new dynamic Fruit array to it. 
 *The size of the new array is num. Make sure to return the new pointer!
 */
Fruit* createEmptyFruitArray(int num) {
    Fruit* ptr = new Fruit[num];

    return ptr;
}

/*
 *deleteFruitArray( … )
 *This function takes a Fruit pointer (that points to a Fruit array) and deallocates it's memory. 
 *It returns nothing.
 */
void deleteFruitArray(Fruit* ptr_arr) {
   
}

//The code here is for testing to see if the program run without errors when the 4 functions are used
int main()
{
    Fruit* F1 = createFruit("banana");
    cout << "Created fruit: " << F1->getName();
    deleteFruit(F1);

    Fruit* fruit_array = createEmptyFruitArray(5);
    deleteFruitArray(fruit_array);
    return 0;
}