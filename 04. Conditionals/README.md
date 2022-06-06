# Conditionals

In most programming and coding flow, there are times where we need to define certain conditions where a program segment will run if that specific condition is fulfilled or vice versa. One of the way we can achieve this is by using `if` and `else`.

---

## Python

In `Python`, we use `if` and `elif` to specify each condition and the respective segment that will execute if that condition is fulfilled. Similar to most programming language, the segment under `else` will execute if all the conditions specified are not satisfied.

```py
if((num1 >= num2) & (num1 >= num3)):    
    print(num1)
elif((num2 >= num1) & (num2 >= num3)):  
    print(num2)
else:
    print(num3)
```

In `Python`, we use a colon `:` after the condition is defined. All segments that will be executed if that condition is `True` **MUST** be indented.

Unlike other programming languages, `Python` does not have `switch` statement.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/python](https://www.w3schools.com/python/python_conditions.asp)
> * Code Example: [conditions.py]()

---

## JavaScript

In `JavaScript`, we use `if` and `else if` to specify each condition and the respective segment that will execute if that condition is fulfilled. Similar to most programming language, the segment under `else` will execute if all the conditions specified are not satisfied.

```js
if((num1 >= num2) && (num1 >= num3)){
    console.log(num1)
}
else if((num2 >= num1) && (num2 >= num3)){
    console.log(num2)
}
else{
    console.log(num3)
}
```

In `JavaScript`, we use a curly brackets `{}` after the condition is defined. All segments that will be executed if that condition is `True` **MUST** be written inside the brackets.

Like most programming languages, `JavaScript` has a `switch` statement.

```js
switch(choice){
    case 'A':
        item = 'Apple Pie'
        break
    case 'B':
        item = 'Blueberry Pudding'
        break
    case 'C':
    case 'D':
        item = 'Milk Tea'
        break
    default:
        console.log('Invalid Choice')
}
```

Since `case 'C'` does not have a `break` statement under it, it will proceed downwards and execute the program segment under `case 'D'` until `break` is encountered.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/js](https://www.w3schools.com/js/js_if_else.asp)
> * Code Example: [conditions.js]()

---

## Java

In `Java`, we use `if` and `else if` to specify each condition and the respective segment that will execute if that condition is fulfilled. Similar to most programming language, the segment under `else` will execute if all the conditions specified are not satisfied.

```java
if((num1 >= num2) && (num1 >= num3)){
    System.out.println(num1);
}
else if((num2 >= num1) && (num2 >= num3)){
    System.out.println(num2);
}
else{
    System.out.println(num3);
}
```

In `Java`, we use a curly brackets `{}` after the condition is defined. All segments that will be executed if that condition is `True` **MUST** be written inside the brackets.

Like most programming languages, `Java` has a `switch` statement.

```java
switch(choice){
    case 'A':
        item = "Apple Pie";
        break;
    case 'B':
        item = "Blueberry Pudding";
        break;
    case 'C':
    case 'D':
        item = "Milk Tea";
        break;
    default:
        System.out.println("Invalid Choice");
}
```

Since `case 'C'` does not have a `break` statement under it, it will proceed downwards and execute the program segment under `case 'D'` until `break` is encountered.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/java](https://www.w3schools.com/java/java_conditions.asp)
> * Code Example: [conditions.java]()

---

## C++

In `C++`, we use `if` and `else if` to specify each condition and the respective segment that will execute if that condition is fulfilled. Similar to most programming language, the segment under `else` will execute if all the conditions specified are not satisfied.

```cpp
if((num1 >= num2) && (num1 >= num3)){
    cout << num1 << endl;
}
else if((num2 >= num1) && (num2 >= num3)){
    cout << num2 << endl;
}
else{
    cout << num3 << endl;
}
```

In `C++`, we use a curly brackets `{}` after the condition is defined. All segments that will be executed if that condition is `True` **MUST** be written inside the brackets.

Like most programming languages, `C++` has a `switch` statement.

```cpp
switch(choice){
    case 'A':
        item = "Apple Pie";
        break;
    case 'B':
        item = "Blueberry Pudding";
        break;
    case 'C':
    case 'D':
        item = "Milk Tea";
        break;
    default:
        cout << "Invalid Choice" << endl;
}
```

Since `case 'C'` does not have a `break` statement under it, it will proceed downwards and execute the program segment under `case 'D'` until `break` is encountered.

> ### Useful Links:
> 
> * Learn More: [w3schools.com/cpp](https://www.w3schools.com/cpp/cpp_conditions.asp)
> * Code Example: [conditions.cpp]()

---