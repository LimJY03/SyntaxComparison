#include <stdio.h>

int io() { //main
    // Output Example
    char phrase[] = "End program.";
    printf("Hello World! ");
    printf("Hello Malaysia!\n");
    printf("Hello Penang!\n");
    printf("Goodbye! %s", phrase);

    // Output:
    // Hello World! Hello Malaysia!
    // Hello Penang!
    // Goodbye! End program.

    // Input Example
    char phrase2[50];
    int x, y;

    printf("\nEnter 2 numbers seperated by space: ");
    scanf_s("%d %d", &x, &y);                           // Example input: 4 5. The value 4 and 5 will be assigned to x and y respectively.
    int sum = x + y;
    printf("The sum of the 2 numbers is: %d\n" , sum);
	
    printf("\nEnter a sentence less than 50 characters: ");
    scanf_s(" %[^\n]s", &phrase2, sizeof(phrase2));
    // [^\n] means that the input will be read until a newline is encountered. The sizeof() is required for string inputs.
    // Do note the space before &[^\n]s. This is to skip the newline character created in the int input previously.
    printf("The sentence you just entered is : %s" , phrase2);

    return 0;

    // Sample Output:
    // Enter 2 numbers seperated by space: 4 5
    // The sum of the 2 numbers is: 9
    //
    // Enter a sentence: Lorem ipsum dolor
    // The sentence you just entered is: Lorem ipsum dolor
}
