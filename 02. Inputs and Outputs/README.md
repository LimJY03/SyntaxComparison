# Inputs and Outputs (Console)

Lorem ipsum
<!-- rmb talk about escape characters, i believe most langs are almost the same for escape characters -->

---

# Python

dolor sit

---

# Javascript

amet consectetur

---

# Java

While the console output does not require any library imports, user input does require `import java.util.Scanner;` .

## Output

To let the program print to the console, we can use the `System.out.print()` statement.

To print the next statements in a new line, we can use `System.out.println()`. It is basically a `System.out.print([anything] + "\n")`

## Input

To accept input from the user, the norm is to make a `Scanner` object.

Getting different datatypes of input also requires different functions of the `Scanner` class to be called.'

Let `sc` be our Scanner object for these common input datatypes.

| Function | Datatype / Input |
| :---: | :---: |
| `sc.next()` | The next *word* as a `String` |
| `sc.nextLine()` | The next *line* as a `String` |
| `sc.nextInt()` | `int` |
| `sc.nextDouble()` | `double` |
| `sc.next.charAt(n)` | The `char` at the *n*th index. |
| `sc.nextBoolean()` | `boolean` |

Note that other than `nextLine()`, the other inputs are delimited by `whitespace` or `newline` character. Using the wrong input function results in a runtime error.

> ### Useful Links
> 
> * Learn More: [w3schools.com/java - input](https://www.w3schools.com/java/java_user_input.asp) and [w3schools.com/java - output](https://www.w3schools.com/java/java_output.asp)
> * Code Example: [input_and_output.java](https://github.com/LimJY03/SyntaxComparison/blob/main/02.%20Inputs%20and%20Outputs/Sample%20Code/input_and_output.java)

---

# C++

To use input and output statements, we have to include the `<iostream>` header file.

## Output

To let the program print to the console, we can use the `std::cout` statement.

There are a few ways to print in a new line, including using the `\n` escape character. Another way is to use `std::endl`.

## Input

To accept input from a user, we can use `std::cin`.

However, for `string`, `std::cin` only works for the first word as `whitespace` is a delimiter.

Therefore we can use the `getline(cin, varName)` function to read an entire line. This function requires `#include <string>`.

C++ also supports reading multiple inputs in one line. The values can be declared by using `whitespace` between inputs in the console and using the `>>` operator between variables in the program.

> ### Useful Links
> 
> * Learn More: [w3schools.com/cpp - input](https://www.w3schools.com/cpp/cpp_user_input.asp) and [w3schools.com/cpp - output](https://www.w3schools.com/cpp/cpp_output.asp)
> * Code Example: [input_and_output.cpp](https://github.com/LimJY03/SyntaxComparison/blob/main/02.%20Inputs%20and%20Outputs/Sample%20Code/input_and_output.cpp)

---

#### TL;DR:

| Language | Input | Output |
| :---: | :---: | :---: | 
| Python |  | `print` |
| JavaScript |  | `console.log()` |
| Java | using `Scanner` object | `System.out.print/ln()` |
| C++ | `std::cin`, `getline()` | `std::cout` |
