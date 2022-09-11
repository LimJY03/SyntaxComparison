# Datatype Conversion and Variable Operations

Lorem ipsum

---

# Python

dolor

## Datatype Conversion

sit

## Variable Operations

amet

---

# Javascript

consectetur

## Datatype Conversion

ching

## Variable Operations

chong

---

# Java

## Datatype Conversion

There are two types of datatype casting: automatic casting and manual casting.

Automatic casting can be done by converting a *smaller* type to a *larger* type (widening casting), and vice versa for manual casting (narrowing casting).


Manual (narrowing) casting must be done manually by placing the type in parentheses in front of the value.

From small to large, the datatype sequence for primitive datatypes is:

`byte -> short -> char -> int -> long -> float -> double`


### Conversion between String and numerical datatypes

| To 👉  <br /> From 👇  | int | double | String |
| :---: | :---: | :---: | :---: |
| int | - | Automatic casting | `String.valueOf()` <br /> `Integer.toString()` |
| double | Manual casting | - | `String.valueOf()` <br /> `Double.toString()` |
| String | `Integer.valueOf()` <br /> `Integer.parseInt()` | `Double.valueOf()` <br /> `Double.parseDouble()`| - |

## Variable Operations

Variable operations are similar for Java, C++, C and C#. It can be found in (link).

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

---

# C++

## Datatype Conversion

There are many types of datatype casting which can be divided into 2 categories: automatic casting and manual casting.

Automatic casting includes implicit casting, which can be done when "upgrading" to a larger data type according to this order:

`bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double`

The simplest way of manual casting is converting by assignment, which has a similar syntax to `Java`.


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
double myDouble = myInt;            // Automatic casting: int to double
std::string str1 = to_string(myInt);// int to string

double myDouble = 3.142;
int myInt = (int)myDouble;          // Manual casting: double to int

std::string myString = "9.81";
double dou1 = stod(myString);       // string to double
```

## Variable Operations

Variable operations are similar for Java, C++, C and C#. It can be found in (link).

---
# C

## Datatype Conversion

## Variable Operations

Variable operations are similar for Java, C++, C and C#. It can be found in (link).

---

# C#

## Datatype Conversion

## Variable Operations

Variable operations are similar for Java, C++, C and C#. It can be found in (link).

---
#### TL;DR:

table here
