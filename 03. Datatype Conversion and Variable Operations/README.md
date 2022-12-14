# Datatype Conversion and Variable Operations

While we are programming or coding, we will be dealing with operations of variables most of the time. Sometimes during the operations we will face problem due to the difference in data type held by the variables. This is where datatype conversion comes in to solve this problem.

---

# Python

## Datatype Conversion

Not similar to `Java`, `C++` and their related languages, there is only one way for casting in `Python`. Since `Python` is an object-oriented language, casting in `Python` is as easy as using its constructor functions:

* `int()` constructs an integer from the argument, given that the argument meets at least one of the following:
    * Is an integer literal.
    * Is a float literal. (The decimals will be removed / the float is rounded-down)
    * Is a string literal that represents an integer.
* `float()` constructs a float number from the argument, given that the argument meets at least one of the following:
    * Is an integer literal.
    * Is a float literal.
    * Is a string literal that represents a float number or an integer.
    * Is `'nan'` (Not A Number) or `'inf'` or `'-inf` (positive or negative infinity).
* `str()` constructs a string literal from a wide variety of data types, including strings, integer literal, float literal and boolean literal.

Datatype conversion can also be applied for collections (`list`, `tuple`, `set`, `dict` etc.) and they have similar conversion method, which is just by calling its respective constructor functions.

### Example

```py
a = int(3)              # a is 3
b = int(3.14159)        # b is 3
c = int('3')            # c is 3

d = float(3)            # d is 3.0
e = float(3.14159)      # e is 3.14159
f = float('3')          # f is 3.0
g = float('3.14159')    # g is 3.14159
h = float('inf')        # h is inf

p = str(3)              # p is '3'
q = str(3.14159)        # q is '3.14159'
r = str('pi')           # r is 'pi'
s = str(True)           # s is 'True'
```

> ### Useful Links:
> 
> * Learn More: [w3schools.com/python](https://www.w3schools.com/python/python_casting.asp)

## Variable Operations

The basic variable operations for `Python` is similar to other languages, but there are some operators that work slightly differently.

### Arithmetic Operators

* `+` for addition operation.
* `-` for subtraction operation.
* `*` for multiplication operation.
* `**` for exponentiation operation. (also known as power)
* `/` for normal division operation.
* `//` for floor division operation. (similar to `/` of `Java`, `C++` and related languages)
* `%` for modulus operation.

### Assigment Operators

* `=` for assignment operation.
* `+=` for addition and then assignment operation.
* `-=` for subtraction and then assignment operation.
* `*=` for multiplication and then assignment operation.
* `**=` for exponentiation and then assignment operation.
* `/=` for normal division and then assignment operation.
* `//=` for floor division and then assignment operation.
* `%=` for modulus and then assignment operation.

### Bitwise Operators

* `&` sets the bit to `1` if both bit-to-compare are `1`.
* `|` sets the bit to `1` if at least one bit-to-compare is `1`.
* `^` sets the bit to `1` if only one bit-to-compare is `1`.
* `~` inverts all bits.
* `<<` pushes all bits to the left (drops off leftmost bits) by adding the number of `0`s that is specified in RHS.
* `>>` pushes all bits to the right (drops off rightmost bits) by adding the number of `0`s that is specified in RHS.

> **Note**
> <br>Similar to arithmetic operators, all bitwise operators can be used along with `=` to form assignment operators.

### Comparison Operators

* `==` to check if Left Hand Side (LHS) equals Right Hand Side (RHS).
* `!=` to check if LHS does not equal to RHS.
* `<` to check if LHS is less than RHS.
* `<=` to check if LHS is less than or equal to RHS.
* `>` to check if LHS is greater than RHS.
* `>=` to check if RHS is greater than or equal to RHS.

### Logical Operators

* `and` to check if both statements are `True`. (Similar to `&&` from most languages)
* `or` to check if at least one statement is `True`. (Similar to `||` from most languages)
* `not` to invert the truthness of the statement. (Similar to `!` from most languages)

> ### Useful Links:
> 
> * Learn More: [w3schools.com/python](https://www.w3schools.com/python/python_operators.asp)

---

# Javascript

consectetur

## Datatype Conversion

ching

## Variable Operations

chong

---

# Java

From small to large, the datatype sequence for primitive datatypes is:

`byte -> short -> char -> int -> long -> float -> double`

## Datatype Conversion

There are two types of datatype casting:

* **Automatic Casting** can be done by converting a *smaller* type to a *larger* type (widening casting), and vice versa for manual casting (narrowing casting).

* **Manual (narrowing) Casting** must be done manually by placing the type in parentheses in front of the value.


### Conversion between String and numerical datatypes

| To 👉  <br /> From 👇  | int | double | String |
| :---: | :---: | :---: | :---: |
| int | - | Automatic casting | `String.valueOf()` <br /> `Integer.toString()` |
| double | Manual casting | - | `String.valueOf()` <br /> `Double.toString()` |
| String | `Integer.valueOf()` <br /> `Integer.parseInt()` | `Double.valueOf()` <br /> `Double.parseDouble()`| - |

### Example

```java
int myInt = 3;
double myDouble = myInt;                // Automatic casting: int to double
String str1 = String.valueOf(myInt);    // int to string

double myDouble = 3.142;
int myInt = (int) myDouble;             // Manual casting: double to int

String myString = "9.81";
double dou1 = Double.valueOf(myString); // string to double
```

> ### Useful Links:
> 
> * Learn More: [w3schools.com/java](https://www.w3schools.com/java/java_type_casting.asp)
## Variable Operations

Variable operations are similar for Java, C++, C and C#. It can be found in [here at Operations.md](https://github.com/LimJY03/SyntaxComparison/blob/main/03.%20Datatype%20Conversion%20and%20Variable%20Operations/Operations.md).

> ### Useful Links:
> 
> * Learn More: [w3schools.com/java](https://www.w3schools.com/java/java_operators.asp)

---

# C++

## Datatype Conversion

There are many types of datatype casting which can be divided into 2 categories:

* **Automatic Casting** includes implicit casting, which can be done when "upgrading" to a larger data type according to this order:

    `bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double`

* The simplest way of **Manual Casting** is converting by assignment, which has a similar syntax to `Java`.


### Conversion between string and numerical datatypes

All numerical datatypes can be converted to strings using the `to_string(var);` function.

Conversion of strings to numerical datatypes has their individual functions:

| function | string to ___ |
| :---: | :---: |
| `stoi()` | int |
| `stod()` | double |
| `stof()` | float |
| `stoul()` | unsigned long |
| `stol()` | long |

### Example

```c++
int myInt = 3;
double myDouble = myInt;                // Automatic casting: int to double
std::string str1 = to_string(myInt);    // int to string

double myDouble = 3.142;
int myInt = (int)myDouble;              // Manual casting: double to int

std::string myString = "9.81";
double dou1 = stod(myString);           // string to double
```

> ### Useful Links:
> 
> * Learn More: [cplusplus.com/reference](https://cplusplus.com/reference/string/)

## Variable Operations

Variable operations are similar for Java, C++, C and C#. It can be found in [here at Operations.md](https://github.com/LimJY03/SyntaxComparison/blob/main/03.%20Datatype%20Conversion%20and%20Variable%20Operations/Operations.md).

> ### Useful Links:
> 
> * Learn More: [w3schools.com/cpp](https://www.w3schools.com/cpp/cpp_operators.asp)

---

# C

## Datatype Conversion

Type casting for primitive datatypes (automatic and manual) in C is the same as C++.

### Conversion between string and numerical datatypes

Conversion from numerical datatypes to a cstring can be done using `sprintf(str, numDatatype, var/value);`

Conversion of strings to numerical datatypes has their individual functions:

| function | string to ___ |
| :---: | :---: |
| `strtol()` | long integer |
| `strtod()` | double |
| `strtof()` | float |

### Example

```c
int myInt = 3;
double myDouble = myInt;                 // Automatic casting: int to double
char str1[];
sprintf(str1, "%d", myInt);              // int to string

double myDouble = 3.142;
int myInt = (int)myDouble;               // Manual casting: double to int

char myString[] = "9.81";
char* endPtr;                            // Pointer to the rest of the string after the last valid character
double dou1 = strtod(myString, &endPtr); // string to double

// A third parameter for base (eg, 10 for decimals, 16 for hex) is needed for strtol.
```

## Variable Operations

Variable operations are similar for Java, C++, C and C#. It can be found in [here at Operations.md](https://github.com/LimJY03/SyntaxComparison/blob/main/03.%20Datatype%20Conversion%20and%20Variable%20Operations/Operations.md).

> ### Useful Links:
> 
> * Learn More: [w3schools.com/c](https://www.w3schools.com/c/c_operators.php)

---

# C#

## Datatype Conversion

Automatic and manual casting are done similar to `Java`.

The order of datatypes are: `char -> int -> long -> float -> double`.

### Conversion between string and numerical datatypes

Conversion between numbers to string can be done using `var.ToString();`

Conversion of strings to numerical datatypes has their individual functions:

| Convert.______ | string to ___ |
| :---: | :---: |
| `ToInt32()` | int |
| `ToDouble()` | double |
| `ToBoolean()` | bool |
| `ToChar()` | char |

### Example

```c#
int myInt = 3;
double myDouble = myInt;                    // Automatic casting: int to double
String str1 = myInt.ToString();             // int to string

double myDouble = 3.142;
int myInt = (int) myDouble;                 // Manual casting: double to int

String myString = "9.81";
double dou1 = Convert.ToDouble(myString);   // string to double
```

> ### Useful Links:
> 
> * Learn More: [w3schools.com/cs](https://www.w3schools.com/cs/cs_type_casting.php)

## Variable Operations

Variable operations are similar for Java, C++, C and C#. It can be found in [here at Operations.md](https://github.com/LimJY03/SyntaxComparison/blob/main/03.%20Datatype%20Conversion%20and%20Variable%20Operations/Operations.md).

> ### Useful Links:
> 
> * Learn More: [w3schools.com/cs](https://www.w3schools.com/cs/cs_operators.php)

---
