#  **Variables and Datatypes**

While we are programming or coding, we will be dealing with data most of the time. Variables become handy as it can store data with a custom name (or a label) we assign to it.

---

## Python

In `Python`, we can assign data directly to variables without needing to declare and specify its datatype.

```py
numbers = 5
decimals = 3.7
texts = 'Some string'   # "" can be used instead of '' for strings.
logic = True            # The other boolean value is False.
```

However, `Python` does not support *constants* usage, but we conventionally name *constants* with all caps. For example: `PI = 3.141592653`

> ### Useful Links:
> 
> * Learn More: [w3schools.com/python](https://www.w3schools.com/python/python_variables.asp)
> * Code Example: [variables_and_datatypes.py](https://github.com/LimJY03/SyntaxComparison/blob/main/01.%20Variables%20and%20Datatypes/Sample%20Codes/variables_and_datatypes.py)

---

## JavaScript

In `JavaScript`, we will use the keyword `var` to declare a variable and `const` to declare a constant without needing to specify their datatype.

```js
var numbers = 5
var decimals = 3.7
var texts = 'Some string'   // "" can be used instead of '' for strings.
var logic = true            // The other boolean value is false.

const PI = 3.141592653
```

Notice that in `JavaScript`, the *boolean* value is `true` and `false` with all small caps.

### `var` vs `let`

1. Unlike `var`, variable declared using `let` cannot be redeclared:

    ``` js
    let x = 'John'
    let x = 'Leeroy'    // error occurs

    var y = 'John'      // y is 'John'
    var y = 'Leeroy'    // y is now 'Leeroy'
    ```
    However, it's value can be changed.

    ```js
    let x = 'Dog'
    x = 'Cat'

    console.log(x)      // prints 'Cat'
    ```

2. Variables declared with `let` inside a block scope `{}` cannot be accessed from outside the block:

    ```js
    {
        let x = 'hello'
        console.log(x)  // prints 'hello'
    }

    console.log(x)      // error: x can NOT be accessed right here
    ```

    Variables declared using `var` can be accessed from both inside and outside of the block:

    ```js
    var x = 2
    console.log(x)      // prints 2

    {
        var x = 3
        console.log(x)  // prints 3
    }

    console.log(x)      // prints 3
    ```

###  **Hoisting**

Javacript variables declared using ```var``` and ```let``` can hoisted to the top before declaring the variable. This means that u can always assign the value to the variable first before declaring the variable. Learn more on hoisting [here](https://www.w3schools.com/js/js_hoisting.asp).

```js
sports = 'soccer'

console.log(sports)  //prints 'soccer'

var x = sports
```
> ### Useful Links:
> 
> * Learn More: [w3schools.com/js](https://www.w3schools.com/js/js_variables.asp)
> * Code Example: [variables_and_datatypes.js](https://github.com/LimJY03/SyntaxComparison/blob/main/01.%20Variables%20and%20Datatypes/Sample%20Codes/variables_and_datatypes.js)

---

## Java

In `Java`, we will need to declare the variables and constants before assigning values to them, by using their datatype. We will use the it to specify the datatype of variables and constants, and the keyword `final` is used to declare a constant.

```java
int numbers = 5;
double decimals = 3.7;          // float can be used instead of decimals.
char alphabet = 'C';            // '' can only be used for strings with only one character.
String texts = "Some string";   // "" must be used for strings with more than one character.
boolean logic = true;           // The other boolean value is false.

final double PI = 3.141592653;
```

Similar to `JavaScript`, the *boolean* value is in small caps. Notice that there is a new datatype in `Java`, which is `char`. It is the datatype for a single ASCII character. 

> ### Useful Links:
> 
> * Learn More: [w3schools.com/java](https://www.w3schools.com/java/java_variables.asp)
> * Code Example: [variables_and_datatypes.java](https://github.com/LimJY03/SyntaxComparison/blob/main/01.%20Variables%20and%20Datatypes/Sample%20Codes/variables_and_datatypes.java)

---

## C++

The declaration of variables in `c++` is rather similar to `Java`, other than spelling differences. The keyword `const` is used to declare a constant.

```c++
int numbers = 5;
double decimals = 3.7;               // float can be used instead of decimals too.
char alphabet = 'C';                 // '' can only be used for strings with only one character.
std::string texts = "Some string";   // "" must be used for strings with more than one character. And the 'S' is in lower case.
bool logic = true;                   // The other boolean value is false. And its only "bool" in constrast with "boolean" in Java

const double PI = 3.141592653;
```

**IMPORTANT:** For `C++`, if you need to use *strings*, you need to include its header file with `#include <string>`, thus the `std::` namespace is needed.

*Side note:* The default output for boolean values in `C++` is `0` or `1`. To output `true` or `false`, add `std::boolalpha` into the `cout` statement.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/cpp](https://www.w3schools.com/cpp/cpp_data_types.asp)
> * Code Example: [variables_and_datatypes.cpp](https://github.com/LimJY03/SyntaxComparison/blob/main/01.%20Variables%20and%20Datatypes/Sample%20Codes/variables_and_datatypes.cpp)

---

## C

The declaration of variables in `C` is similar in style to `C++`, with some syntax differences. The keyword `const` is used to declare a constant.

```c++
int numbers = 5;
double decimals = 3.7;               // float can be used instead of decimals too.
char alphabet = 'C';                 // '' can only be used for strings with only one character.
char texts[] = "Some string";        // no strings, char arrays are treated as strings
bool logic = true;                   // The other boolean value is false.

const double PI = 3.141592653;
```

**IMPORTANT:** For `C`, if you need to use *bool*, you need to include its header file with `#include <stdbool.h>`.

*Side note:* The default output for boolean values in `C` is `0` or `1`. To output `true` or `false`, we can use the ternary operator. The details can be seen in the sample code.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/c](https://www.w3schools.com/c/c_data_types.php)
> * Code Example: [variables_and_datatypes.c](https://github.com/LimJY03/SyntaxComparison/blob/main/01.%20Variables%20and%20Datatypes/Sample%20Codes/variables_and_datatypes.c)

---

## C#

In `C#`, we will need to declare the variables and constants before assigning values to them, by using their datatype. We will use the it to specify the datatype of variables and constants, and the keyword `const` is used to declare a constant.

```c#
int numbers = 5;
double decimals = 3.7;          // float can be used instead of decimals.
char alphabet = 'C';            // '' can only be used for strings with only one character.
string texts = "Some string";   // "" must be used for strings with more than one character.
bool logic = true;              // The other boolean value is false.

const double PI = 3.141592653;
```

In contrast with Java, `string` is spelled with a small 's', and `bool` is spelled similarly to `C++`.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/cs](https://www.w3schools.com/cs/cs_variables.php)
> * Code Example: [variables_and_datatypes.cs](https://github.com/LimJY03/SyntaxComparison/blob/main/01.%20Variables%20and%20Datatypes/Sample%20Codes/variables_and_datatypes.cs)

---

#### TL;DR:

| Language | Datatypes | Constant | Side notes |
| :---: | :---: | :---: | :---: |
| Python | Not required | No support, convention with all CAPITALS |`" "` `' '` are interchangable for strings |
| JavaScript | Not required | `const` | Usage of `var` and `let`, refer to top. |
| Java | Required | `final` | `String`, `boolean` |
| C++ | Required | `const` | `std::string`, `bool` |
| C | Required | `const` | `char x[]`, `bool` header |
| C# | Required | `const` | `string`, `bool` |

---
