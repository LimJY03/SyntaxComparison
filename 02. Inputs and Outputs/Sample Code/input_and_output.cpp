#include <iostream>
#include <string>

int main() {
	// Output Example
    std::string phrase = "End program.";
    std::cout << "Hello World! ";
    std::cout << "Hello Malaysia!" << std::endl;
    std::cout << "Hello Penang!\n";
    std::cout << "Goodbye! " << phrase;

    // Output:
    // Hello World! Hello Malaysia!
    // Hello Penang!
    // Goodbye! End program.

	//Input Example
    std::string phrase2;
    int x, y;

    std::cout << "Enter 2 numbers seperated by space: ";
    std::cin >> x >> y;                        // Example input: 4 5. The value 4 and 5 will be assigned to x and y respectively.
    int sum = x + y;
    std::cout << "The sum of the 2 numbers is: " << sum << std::endl;
    std::cout << "\nEnter a sentence: ";
    std::cin.ignore();                         // This line enables cin to ignore one line of input as the integer input previously
                                               // contains a newline character which was not accepted in an integer input.
    getline(std::cin, phrase2);
    std::cout << "The sentence you just entered is: " << phrase2;
	
    // Sample Output:
    // Enter 2 numbers seperated by space: 4 5
    // The sum of the 2 numbers is: 9
    //
    // Enter a sentence: Lorem ipsum dolor
    // The sentence you just entered is: Lorem ipsum dolor
  
    return 0;
}
