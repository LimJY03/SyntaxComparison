# **Loops**

Loops are handy, if you want to run the same code over and over again, each time with a different value. 

---

# **Different Kinds Of Loops**

# **Javascript**   

```for ``` - loops through a block of code a number of times

```for/ in ``` - loops through the properties of an object

```for/ of ``` - loops through the values of an iterable object

```while ``` - loops through a block of code while a specified condition is true

```do/ while ``` - also loops through a block of code while a specified condition is true  

<br>

A normal  ```for``` loops goes as below:
    
> ```js
> for (statement 1; statement 2; statement 3) {
>  // code block to be executed
>}```

**Statement 1** initializes the initial condition of the statement

**Statement 2** defines the condition to determine whether the code block should be executed.

**Statement 3** is executed everytime after the code block has been executed

<br>

## **Example**

```js
for (let i = 0; i < 5; i++) {
  message += "This is message " + i;
}
```

## **Loop Scope**
As mentioned before in [Block Scope for Javascript](https://github.com/LimJY03/SyntaxComparison/tree/main/01.%20Variables%20and%20Datatypes#block-scope), ```var``` can be accessed from inside and outside of the block scope where ```let``` could not. This does the same in the loops.

Here's an example of using ```var``` in  for loop:

```js
var i = 5;

for (var i = 0; i < 10; i++) {
  // some code
}

console.log(i) // prints 10
```

Here's another exampleof using ```let``` in for loop:

```js
let i = 5;

for (let i = 0; i < 10; i++) {
  // some code
}

console.log(i) // prints 5
```

## **For /in**
The JavaScript ```for in``` statement loops through the properties of an Object:

> ```js
> for (key in object) {
>  // code block to be executed
>}
> ```

### **Example**

```js
const dog = {gender:"Male", breed:"Golden Retriever", age:5};

let text = "";

for (let x in dog) {
  text += dog[x];
}
```



- The <strong>for in</strong>  loop iterates over a **person** object

- Each iteration returns a **key** (x)

- The key is used to access the **value** of the key

- The value of the key is **person[x]**

<br>

## **Array.forEach()**

Javascript array has a ```forEach()``` that calls a function (a callback function) once for each array element.

The function takes 3 arguments: 
- item value
- item index
- the array itself

```js
const numbers = [45, 4, 9, 16, 25];

let txt = "";
numbers.forEach(myFunction);

function myFunction(value, index, array) {
  txt += value;
}
```

## **For /of**
```for/ of``` statements loops through the values of an iterable object. It allows you to loop over Arrays, Strings, Maps, Sets and more.

> ```js
> for (variable of iterable) {
> // code block to be executed
>}
>```

### **Example**

```js
let hobby = "programming";

let text = "";
for (let x of hobby) {
    text += x;
}
```

## **While Loops**
> ```js
> while (condition) {
> // code block to be executed
>}
>```

### **Example**
```js
while (i < 10) {
  text += "The number is " + i;
  i++;
}
```

## **Do While**
```js
do {
  // code block to be executed
}
while (condition);
```

### **Example**
```js
do {
  text += "The number is " + i;
  i++;
}
while (i < 10);
```

## **Break**
The ```break``` statement jumps out of a loop. Use ```break``` statement to jump out of code block.

### **Example**
```js
for (let i = 0; i < 5; i++) {
  if (i === 2) { break; }
  text += "The number is " + i + "<br>";
}
```

The ```break``` statement breaks out of the loop when counter is 2.


## **Continue**
The ```continue``` statement breaks one iteration and continues with the next iteration in the loop

### **Example**
```js
for (let i = 0; i < 10; i++) {
  if (i === 3) { continue; }
  text += "The number is " + i + "<br>";
}
```

---
<br>

# **Python**

<br>

## **For Loops**
In Python, ```for``` loop is used to iterate over a sequence (list, tuple, dictionary, set, string)  \

```for``` loop does not require an indexing variable to set beforehand in Python.

```py
 fruits = ["apple", "banana", "cherry"]
 for x in fruits:
   print(x)
```
### **Looping through a String**
```py
for x in "banana":
  print(x)
```

## **Break**
Use ```break``` statement to stop the loop before it has looped through all the items:

```py
sports = ["football", "basketball", "baseball"]
for x in fruits:
  print(x)
  if x == "basketball":
    break
# prints "football" only
```

## **Continue**
```continue``` statement stops the current iteration and continue with the next loop:

```py
fruits = ["apple", "banana", "cherry"]
for x in fruits:
  if x == "banana":
    continue
  print(x)
```

## **range()**
```range()``` returns a sequence of numbers, starting from 0 by default, and increased by 1 by default and ends at a specified number.

### **Example**
```py
for x in range(6):
  print(x)
  ```
Note that the loop stops before specified end value. For instance, the example above prints the value from 0 to 5 instead of 6.

### **Example**
```py
# using starting parameter
for x in range(2, 6):
  print(x)
  ```

### **Example**
```py
# Specifying increment value
for x in range(2, 30, 3):
  print(x)
  ```

## **Else In For Loop**
Use ```else``` in a ```for``` loop to execute the code block after the loop is finished:

```py 
for x in range(6):
  print(x)
else:
  print("It's done!")
```
>Note that the ```else``` block will not be executed if the loop is stopped by a ```break``` statement.

```py
for x in range(6):
  if x == 3: break
  print(x)
else:
  print("it's done!") # This line will not be printed out
  ```

## **pass**
Use ```pass``` statement to pass through loops with no content in it to avoid errors.

```py
for x in [0, 1, 2]:
  pass
```

## **While Loops**
The ```while``` loop can be executed as long the condition is ```true```

```py
i = 1
while i < 6: # As long as the value of i is smaller than 6
  print(i)
  i += 1
  ```

The ```break``` and ```continue``` do the same in ```while``` loop as what they do in ```for``` loop: 

### **Example**
>```py
>i = 1
>while i < 6:
> print(i)
> if i == 3:
>    break
>    i += 1
>```
>```py
>i = 0
>while i < 6:
> i += 1
> if i == 3:
>   continue
>  print(i)```

The ```else``` statement is used to execute the code block when the condition is no longer met.

```py
i = 1
while i < 6:
  print(i)
  i += 1
else:
  print("i is no longer less than 6")
  ```

---
<br>
<br>



# **Java**

# **C++**

```for ``` - loops through a block of code a number of times

```for_each ```- loops through a range of elements and apply an algoritm to it

```while ``` - loops through a block of code while a specified condition is true

```do/ while ``` - also loops through a block of code while a specified condition is true  

<br>

A normal  ```for``` loop in C++ is similar in Java and Javascript:
    
> ```c++
> for (initial; condition; update statement) {
>  // code block to be executed
> }
> ```

## **For loops with a range**

It executes a for loop over a range. Used as a more readable equivalent to the traditional for loop operating over a range of values, such as all elements in a container.

```c++
for ( range_declaration : range_expression ) {
    // code block to be executed
}
```

The arguments taken:

|Parameter|Explanation|
|:-:|:-:|
|range_declaration|Declaration of a named variable, often uses the auto specifier for automatic type deduction|
|range_expression|Any expression that represents a suitable sequence or a braced-init-list (eg. arrays)|
|loop_statement|The body of the loop|

### **Example**
```c++
    //looping through elements in an array
    std::vector<int> v = {0, 1, 2, 3, 4, 5};
    for (auto i : v) {
        std::cout << i << ' ';          //prints 0 1 2 3 4 5 
    }


    // Just running a loop for every array element
    int a[] = {0, 1, 2, 3, 4, 5}; 
    for (int n : a) {
        std::cout << "In loop" << ' ';  //prints "In loop" 6 times
    }
    std::cout << '\n';
```

## **for_each()**

C++ array has a ```forEach()``` that calls a function (a callback function) once for each array element.

The function takes 3 arguments: 
- The beginning position
- The ending position
- The function or an object function which operation would be applied to each element

```c++
void printx2(int a) {
    std::cout << a * 2 << " ";
}

//in main()
    int arr[5] = { 1, 5, 2, 4, 3 };
    std::cout << "Multiple of 2 of elements are : ";
    for_each(arr1.begin(), arr1.end(), printx2);
```

## **While and Do-while Loops**

The syntax is similar to `java` and `javascript`.

### **Example**

```c++
while (i < 10) {
  text += "The number is " + i;
  i++;
}

do {
  text += "The number is " + i;
  i++;
} while (i < 10);
```

## **Break and Continue**

Similar to `java` and `javascript`:
The ```break``` statement jumps out of a loop. Use ```break``` statement to jump out of code block.
The ```continue``` statement breaks one iteration and continues with the next iteration in the loop.

### **Example**
```c++
for (int i = 0; i < 5; i++) {
  if (i == 2) { 
    break; //or continue;
  }
  text += "The number is " + i + "<br>";
}
```
