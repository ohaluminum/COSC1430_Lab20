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
    Fruit* fruit_ptr = new Fruit(name);

    return fruit_ptr;
}

... deleteFruit(...) {
    //deallocate space taken by the Fruit pointer that points to a Fruit object
}

... createEmptyFruitArray(int num) {
    //create a new fruit array of length num and return it's pointer
}

void deleteFruitArray(Fruit* ptr_arr) {
    //deallocate space taken by the Fruit pointer that points to a Fruit array
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