#include <iostream> //must include to use cout/cin.
#include <string>   //must include to use strings

int main(){

    // Declare and initialise variables
    int fav_number = 10;
    double decimal = 2.718;
    char fav_alphabet = 'A';
    std::string fav_message = "Hello World";  //std:: is needed here as it is not a primitive datatype and called from the <string> library.
    bool is_married = false;

    const double PI = 3.14159263;

    // std:: can be simplified by including "using namespace std;" on the top of the program, but it is not too encouraged in the more advanced levels. 
    // For more info on namespaces, refer to https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice.

    // Output variables
    std::cout << "My favourite number is: " << fav_number << std::endl;                 // My favourite number is 10.
    std::cout << decimal << " is a decimal number." << std::endl;                       // 2.718 is a decimal number.
    std::cout << "My favourite alphabet is " << fav_alphabet << "." << std::endl;       // My favourite alphabet is A.
    std::cout << "My favourite message is " << fav_message << "." << std::endl;         // My favourite message is Hello World.
        
    // C++ boolean output gives 0 and 1 for false and true respectively. However true and false can be outputted with std::boolalpha:
    std::cout << "Am I married? " << std::boolalpha << is_married << "." << std::endl;  // Am I married? false.
    std::cout << "Am I married? " << is_married << "." << std::endl;                    // Am I married? 0.
    
    std::cout << "In math, pi has the value of " << PI << "." << std::endl;             // In math, pi has the value of 3.141592653.

    return 0;
}
