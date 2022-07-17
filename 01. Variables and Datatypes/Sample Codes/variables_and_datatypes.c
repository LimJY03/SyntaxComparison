#include <stdio.h> // for input and output
#include <stdbool.h> // for boolean datatype

int v_and_d() { //main

    // Declare and initialise variables
    int fav_number = 10;
    double decimal = 2.718;
    char fav_alphabet = 'A';
    char fav_message[] = "Hello World";  //There is no string datatype in C. All strings are a one-dimensional char array.
    bool is_married = false;

    const double PI = 3.14159263;

    // Output variables
    printf("My favourite number is: %d\n" , fav_number);                // My favourite number is 10.
    printf("%.3f is a decimal number.\n" , decimal);                    // 2.718 is a decimal number.
    printf("My favourite alphabet is %c.\n" , fav_alphabet);            // My favourite alphabet is A.
    printf("My favourite message is %s.\n" , fav_message);              // My favourite message is Hello World.
    printf("Am I married? %i\n" , is_married);                          // Am I married? 0.
	
    // C boolean output gives 0 and 1 for false and true respectively. However true and false can be outputted using the following line:
    printf("Am I married? %s\n", is_married ? "true" : "false");        // Am I married? false. (Note the datatype change from %i to %s.)
	
    printf("In math, pi has the value of %.8f." , PI);                  // In math, pi has the value of 3.141592653.

    return 0;
}