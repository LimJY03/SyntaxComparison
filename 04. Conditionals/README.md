# Conditionals

In most programming and coding flow, there are times where we need to define certain conditions where a program segment will run if that specific condition is fulfilled or vice versa. One of the way we can achieve this is by using `if` and `else`.

---

## Python

In `Python`, we use `if` and `elif` to specify each condition and the respective segment that will execute if that condition is fulfilled. Similar to most programming language, the segment under `else` will execute if all the conditions specified are not satisfied.

```py
if ((num1 >= num2) and (num1 >= num3)):    
    print(num1)
elif ((num2 >= num1) and (num2 >= num3)):  
    print(num2)
else:
    print(num3)
```

In `Python`, we use a colon `:` after the condition is defined. All segments that will be executed if that condition is `True` **MUST** be indented.

For `Python` version **3.10 and above**, it now supports `switch` statement with the keyword `match`.

```py
match (choice):
    case 'A':
        print('Apple Pie')
    case 'B':
        print('Blueberry Pudding')
    case 'C' | 'D':
        print('Milk Tea')
    case _:
        print('Invalid Choice')
```

`case 'C' | 'D'` means that if the value of choice is `'C'` or `'D'`, the statement below it will execute. Unlike other programming language, `break` statement is not needed for `match`. 

`case _` means the default case.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/python](https://www.w3schools.com/python/python_conditions.asp) and [docs.python.org](https://docs.python.org/3/whatsnew/3.10.html#pep-634-structural-pattern-matching)
> * Code Example: [conditionals.py](https://github.com/LimJY03/SyntaxComparison/blob/main/04.%20Conditionals/Sample%20Codes/conditionals.py)

---

## JavaScript

In `JavaScript`, we use `if` and `else if` to specify each condition and the respective segment that will execute if that condition is fulfilled. Similar to most programming language, the segment under `else` will execute if all the conditions specified are not satisfied.

```js
if ((num1 >= num2) && (num1 >= num3)) {
    console.log(num1)
}
else if ((num2 >= num1) && (num2 >= num3)) {
    console.log(num2)
}
else {
    console.log(num3)
}
```

In `JavaScript`, we use a curly brackets `{}` after the condition is defined. All segments that will be executed if that condition is `True` **MUST** be written inside the brackets.

Like most programming languages, `JavaScript` has a `switch` statement.

```js
switch (choice) {
    case 'A':
        console.log('Apple Pie')
        break
    case 'B':
        console.log('Blueberry Pudding')
        break
    case 'C':
    case 'D':
        console.log('Milk Tea')
        break
    default:
        console.log('Invalid Choice')
}
```

Since `case 'C'` does not have a `break` statement under it, it will proceed downwards and execute the program segment under `case 'D'` until `break` is encountered.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/js](https://www.w3schools.com/js/js_if_else.asp)
> * Code Example: [conditionals.js](https://github.com/LimJY03/SyntaxComparison/blob/main/04.%20Conditionals/Sample%20Codes/conditionals.js)

---

## Java

In `Java`, we use `if` and `else if` to specify each condition and the respective segment that will execute if that condition is fulfilled. Similar to most programming language, the segment under `else` will execute if all the conditions specified are not satisfied.

```java
if ((num1 >= num2) && (num1 >= num3)) {
    System.out.println(num1);
}
else if ((num2 >= num1) && (num2 >= num3)) {
    System.out.println(num2);
}
else {
    System.out.println(num3);
}
```

In `Java`, we use a curly brackets `{}` after the condition is defined. All segments that will be executed if that condition is `True` **MUST** be written inside the brackets.

Like most programming languages, `Java` has a `switch` statement.

```java
switch (choice) {
    case 'A':
        System.out.println("Apple Pie");
        break;
    case 'B':
        System.out.println("Blueberry Pudding");
        break;
    case 'C':
    case 'D':
        System.out.println("Milk Tea");
        break;
    default:
        System.out.println("Invalid Choice");
}
```

Since `case 'C'` does not have a `break` statement under it, it will proceed downwards and execute the program segment under `case 'D'` until `break` is encountered.

### Note for new Java 17+ switch expressions

Java 17+ has a new switch statement format which does not require `break` statements. The code below would have the same output as the code above in Java 17+:

```java
switch (choice) {
    case 'A' -> System.out.println("Apple Pie");
    case 'B' -> System.out.println("Blueberry Pudding");
    case 'C', 'D' -> System.out.println("Milk Tea");
    default -> System.out.println("Invalid Choice");
}
```

> ### Useful Links:
> 
> * Learn More: [w3schools.com/java](https://www.w3schools.com/java/java_conditions.asp)
> * Code Example: [conditionals.java](https://github.com/LimJY03/SyntaxComparison/blob/main/04.%20Conditionals/Sample%20Codes/conditionals.java)

---

## C/C++

In `C` and `C++`, we use `if` and `else if` to specify each condition and the respective segment that will execute if that condition is fulfilled. Similar to most programming languages, the segment under `else` will execute if all the conditions specified are not satisfied.

```cpp
if ((num1 >= num2) && (num1 >= num3)) {
    cout << num1 << endl;                    //printf("%d", num1);
}
else if ((num2 >= num1) && (num2 >= num3)) {
    cout << num2 << endl;                    //printf("%d", num2);
}
else {
    cout << num3 << endl;                    //printf("%d", num3);
}
```

In `C` and `C++`, we use a curly brackets `{}` after the condition is defined. All segments that will be executed if that condition is `True` **MUST** be written inside the brackets.

Like most programming languages, `C` and `C++` have a `switch` statement.

```cpp
switch (choice) {
    case 'A':
        cout << "Apple Pie" << endl;         //printf("Apple Pie");
        break;
    case 'B':
        cout << "Blueberry Pudding" << endl; //printf("Blueberry Pudding");
        break;
    case 'C':
    case 'D':
        cout << "Milk Tea" << endl;          //printf("Milk Tea");
        break;
    default:
        cout << "Invalid Choice" << endl;    //printf("Invalid Choice");
}
```

Since `case 'C'` does not have a `break` statement under it, it will proceed downwards and execute the program segment under `case 'D'` until `break` is encountered.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/cpp](https://www.w3schools.com/cpp/cpp_conditions.asp)
> * Learn More: [w3schools.com/c](https://www.w3schools.com/c/c_conditions.php)
> * Code Example: [conditionals.cpp](https://github.com/LimJY03/SyntaxComparison/blob/main/04.%20Conditionals/Sample%20Codes/conditionals.cpp)
> * Code Example: [conditionals.c](https://github.com/LimJY03/SyntaxComparison/blob/main/04.%20Conditionals/Sample%20Codes/conditionals.c)

---

#### TL;DR:

| Language | `if` Syntax | `switch` Syntax |
| :---: | :---: | :---: | 
| Python | `if, elif, else` | `match..case..case _` |
| JavaScript | `if, else if, else` | `switch..case..default` |
| Java | `if, else if, else` | `switch..case..default` |
| C/C++ | `if, else if, else` | `switch..case..default` |

---
