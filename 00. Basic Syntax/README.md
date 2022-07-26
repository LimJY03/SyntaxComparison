# **Basic Syntax**

We will break the basic syntax of different programming languages into few main parts:

1. Commenting
2. Indentation
3. Statements

---

## **01. Commenting**

Comments are used to explain the code we write. At the same time, it enhances code readability which allows other programmers as well as ourselves to understand our code easily for code maintainance. Furthermore, comments can be used to prevent execution when testing code.

| Language | Comment Syntax |
| :---: | :---: |
| Python | `#` |
| JavaScript | `//` |
| Java | `//` |
| C/C++ | `//` |
| C# | `//` |

The comment syntax shown above are **single-line comment** syntax, it will only *comment* out that one line. If we want to comment multiple lines (or create a comment block), we will use **multi-line comment** syntax.

Comment Syntax Sample for `Python`:

```py
# This is a single-line comment

# But in python there is no multi-line comment syntax, 
# so we need to insert # for each of the lines.
```

Comment Syntax Sample for `JavaScript`, `Java`, `C`, `C++` and `C#`:

```js
// This is a single-line comment

/* This is a multi-line comment
   all texts between the open and close 
   comment syntax are comments */
```

---

## **02. Indentation**

Indentation refers to the spaces at the beginning of a code line. In most of the programming languages, indentation enhances code readability as it shows the process part of the code. 

### **Python**

In some programming languages like `Python`, indentation is very important as it indicates a block of code. The code blocks are written below the colon `:`

```py
def my_function(num):
    print("This is a function")
    print("that receives a number")
    print("and prints it out")
    print(num)
```

The code block (4 indented lines) belongs to the function `my_function`.

### **JavaScript**

In most programming languages, indentations are normally used (not a must) to show a code block. In `JavaScript`, some code blocks with more than one line are written inside curly brackets `{}`.

```js
function my_function(num) {
    console.log("This is a function")
    console.log("that receives a number")
    console.log("and prints it out")
    console.log(num)
}
```

### **Java**

Similar to `JavaScript`, indentations are normally used (not a must) to show a code block. In `Java`, some code blocks with more than 1 line are written inside curly brackets `{}`. 

```java
public void my_function(int num) {
    System.out.println("This is a function");
    System.out.println("that receives a number");
    System.out.println("and prints it out");
    System.out.println(num);
}
```
The code above represents a non-static function, in order to access to a non static function in `Java`, a object respective to its class has to be created.

### **C/C++**

Indentations are normally used (not a must) to show a code block.

```c
// C
void my_function(int num) {
    printf("This is a function"\n);
    printf("that receives a number\n");
    printf("and prints it out\n");
    printf("%d", num);
}
```

```c++
// C++
void my_function(int num) {
    std::cout << "This is a function" << std::endl;
    std::cout << "that receives a number" << std::endl;
    std::cout << "and prints it out" << std::endl;
    std::cout << num << std::endl;
}
```

### **C/C++**

Indentations are normally used (not a must) to show a code block.

```c#
void my_function(int num) {
    Console.WriteLine("This is a function");
    Console.WriteLine("that receives a number");
    Console.WriteLine("and prints it out");
    Console.WriteLine(num);
}
```

#### TL;DR :

| Language | Indentation |
| :---: | :---: |
| Python | For code blocks |
| JavaScript | For readability. `{}` for code blocks |
| Java | For readability. `{}` for code blocks |
| C/C++ | For readability. `{}` for code blocks |
| C# | For readability. `{}` for code blocks |

---

## **03. Statements**

Every codes contain multiple statements that each do a specific work. Different programming languages have slight differences in writing statements.

### **Python**

In `Python`, the statement syntax is more basic. We don't need to add `;` to the end of the statement.

```py
num1 = 5
num2 = 7

sum = num1 + num2

print(sum)  # 12
```

Learn more about syntax for `Python` at [w3schools.com/py](https://www.w3schools.com/python/python_syntax.asp).

### **JavaScript**

In `JavaScript`, the statement syntax is almost the same as `Python`. Adding a semicolon `;` to the end of a statement is optional.

```js
let num1 = 5
let num2 = 7

var sum = num1 + num2;

console.log(sum);   // 12
```

Learn more about syntax for `JavaScript` at [w3schools.com/js](https://www.w3schools.com/js/js_syntax.asp).

### **Java**

In `Java`, the statement syntax has a rule: all statements must end with a semicolon `;`.

```java
int num1 = 5;
int num2 = 7;

int sum = num1 + num2;

System.out.println(sum);    // 12
```

Learn more about syntax for `Java` at [w3schools.com/java](https://www.w3schools.com/java/java_syntax.asp).

### **C/C++**

In `C` and `C++`, the statement syntax has a rule similar to `Java`: all statements must end with a semicolon `;`.

```c
// C
int num1 = 5;
int num2 = 7;

int sum = num1 + num2;

printf("%d", sum);    // 12
```

```c++
// C++
int num1 = 5;
int num2 = 7;

int sum = num1 + num2;

std::cout << sum;    // 12
```
Learn more about syntax for `C` at [w3schools.com/c](https://www.w3schools.com/c/c_intro.php)

Learn more about syntax for `C++` at [w3schools.com/cpp](https://www.w3schools.com/cpp/default.asp).

### **C#**

In `C#`, the statement syntax has a rule: all statements must end with a semicolon `;`.

```c#
int num1 = 5;
int num2 = 7;

int sum = num1 + num2;

Console.WriteLine(sum);    // 12
```

Learn more about syntax for `C#` at [w3schools.com/cs](https://www.w3schools.com/cs/cs_syntax.php).

#### TL;DR :

| Language | Usage of `;` |
| :---: | :---: |
| Python | Not required |
| JavaScript | Optional |
| Java | End of all statements |
| C/C++ | End of all statements |
| C# | End of all statements |

---
