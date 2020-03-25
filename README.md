# COSC1430_Lab20

You're given a Fruit class with a single string member name. All of the constructor and accessor/mutator functions are completed. Your task is to write in main.cpp four new functions:

(1) createFruit(string name)
    
    This function takes in a string argument, initialize a Fruit pointer, dynamically allocates a new Fruit object. 
    It return the new pointer.

(2) deleteFruit( … )

    This function takes a Fruit pointer (that points to a Fruit object) and deallocates it's memory. 
    It returns nothing (void).

(3) createEmptyFruitArray(int num)
    
    This function initializes a new Fruit pointer and allocates a new dynamic Fruit array to it. The size of the new array is num. 
    Make sure to return the new pointer!

(4) deleteFruitArray( … )
    
    This function takes a Fruit pointer (that points to a Fruit array) and deallocates it's memory. 
    It returns nothing.
