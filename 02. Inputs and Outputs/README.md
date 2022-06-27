# Inputs and Outputs (Console)

Lorem ipsum

---

# Python

dolor sit

---

# Javascript

amet consectetur

---

# Java

joe mama

---

# C++

To use input and output statements, we have to include the `<iostream>` header file.

## Output

To let the program print to the console, we can use the `std::cout` statement.

There are a few ways to print in a new line, including using the `\n` escape character. Another way is to use `std::endl`.

### Example 

```c++
#include <iostream>
#include <string>

int main(){
    std::string phrase = "End program."
    std::cout << "Hello World! ";
    std::cout << "Hello Malaysia!" << std::endl;
    std::cout << "Hello Penang!\n";
    std::cout << "Goodbye! " << phrase;
    return 0;
    
    // Output:
    // Hello World! Hello Malaysia!
    // Hello Penang!
    // Goodbye! End program.
}
```

## Input

To accept input from a user, we can use `std::cin`.

However, for `string`, `std::cin` only works for the first word as `whitespace` is a delimiter.

Therefore we can use the `getline(cin, varName)` function to read an entire line. This function requires `#include <string>`.

C++ also supports reading multiple inputs in one line. The values can be declared by using `whitespace` between inputs in the console and using the `>>` operator between variables in the program.

### Example

```c++
#include <iostream>
#include <string>

int main(){
    std::string phrase;
    int x, y;

    std::cout << "Enter 2 numbers seperated by space: ";
    std::cin >> x >> y;                        // Example input: 4 5. The value 4 and 5 will be assigned to x and y respectively.
    int sum = x + y;
    std::cout << "The sum of the 2 numbers is: " << sum << std::endl;
    std::cout << "\nEnter a sentence: ";
    std::cin.ignore();                         // This line enables cin to ignore one line of input as the integer input previously
                                               // contains a newline character which was not accepted in an integer input.
    getline(std::cin, phrase);
    std::cout << "The sentence you just entered is: " << phrase;
    return 0;

    // Sample Output:
    // Enter 2 numbers seperated by space: 4 5
    // The sum of the 2 numbers is: 9
    //
    // Enter a sentence: Lorem ipsum dolor
    // The sentence you just entered is: Lorem ipsum dolor
}
```


---

#### TL;DR:

| Language | Input | Output |
| :---: | :---: | :---: | 
| Python |  | `print` |
| JavaScript |  | `console.log()` |
| Java | using `Scanner` object | `System.out.print/ln()` |
| C++ | `std::cin`, `getline()` | `std::cout` |
