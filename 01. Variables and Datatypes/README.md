#  **Variables and Datatypes**

While we are programming or coding, we will be dealing with data most of the time. Variables become handy as it can store data with a custom name (or a label) we assign to it.

---

## **Python**

In `python`, we can assign data directly to variables without needing to declare and specify its datatype.

```py
numbers = 5
decimals = 3.7
texts = 'Some string'   # "" can be used instead of '' for strings.
logic = True            # The other boolean value is False.
```

However, `python` does not support *constants* usage, but we conventionally name *constants* with all caps. For example: `PI = 3.141592653`

> ### **Useful Links:**
> 
> * Learn More: [w3schools.com/python](https://www.w3schools.com/python/python_variables.asp)
> * Code Example: [variables_and_datatypes.py](https://github.com/LimJY03/SyntaxComparison/blob/main/01.%20Variables%20and%20Datatypes/Sample%20Codes/variables_and_datatypes.py)

---

## **JavaScript**

In `JavaScript`, we will use the keyword `var` to declare a variable and `const` to declare a constant without needing to specify their datatype.

```js
var numbers = 5
var decimals = 3.7
var texts = 'Some string'   // "" can be used instead of '' for strings.
var logic = true            // The other boolean value is false.

const PI = 3.141592653
```

Notice that in `JavaScript`, the *boolean* value is `true` and `false` with all small caps.

> ### **Useful Links:**
> 
> * Learn More: [w3schools.com/js](https://www.w3schools.com/js/js_variables.asp)
> * Code Example: [variables_and_datatypes.js](https://github.com/LimJY03/SyntaxComparison/blob/main/01.%20Variables%20and%20Datatypes/Sample%20Codes/variables_and_datatypes.js)

---

## **Java**

In `java`, we will need to declare the variables and constants before assigning values to them, by using their datatype. We will use the it to specify the datatype of variables and constants, and the keyword `final` is used to declare a constant.

```java
int numbers = 5;
double decimals = 3.7;          // float can be used instead of decimals.
char alphabet = 'C';            // '' can only be used for strings with only one character.
String texts = "Some string";   // "" must be used for strings with more than one character.
boolean logic = true;           // The other boolean value is false.

final double PI = 3.141592653;
```

Similar to `JavaScript`, the *boolean* value is in small caps. Notice that there is a new datatype in `java`, which is `char`. It is the datatype for a single ASCII character. 

> ### **Useful Links:**
> 
> * Learn More: [w3schools.com/java](https://www.w3schools.com/java/java_variables.asp)
> * Code Example: [variables_and_datatypes.java](https://github.com/LimJY03/SyntaxComparison/blob/main/01.%20Variables%20and%20Datatypes/Sample%20Codes/variables_and_datatypes.java)

---

## **C++**

The declaration of variables in `c++` is rather similar to `Java`, other than spelling differences. The keyword for constant is `const`.

```c++
int numbers = 5;
double decimals = 3.7;          // float can be used instead of decimals too.
char alphabet = 'C';            // '' can only be used for strings with only one character.
bool logic = true;              // The other boolean value is false. And its only "bool" in constrast with "boolean" in Java
string texts = "Some string";   // "" must be used for strings with more than one character. And the 'S' is in lower case.

const double PI = 3.141592653;
```

**IMPORTANT:** For C++, if you need to use strings, you need to include its header file with `#include <string>.`

> ### **Useful Links:**
> 
> * Learn More: [w3schools.com/cpp](https://www.w3schools.com/cpp/cpp_data_types.asp)

---


---
