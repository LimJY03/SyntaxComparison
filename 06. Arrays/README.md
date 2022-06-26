# Arrays and Collections

Lorem ipsum

---

# Python

dolor sit

---

# Javascript

amet consectetur

---

# Java

There are a few way to declare `Java` arrays, one of it being `datatype[] array;`.

ArrayLists can be declared through `ArrayList<datatype> listName;`.

## Arrays

The first element in an array is `[0]`. To access an element in an array, you can refer to its index number in square brackets.

The array size is fixed once it is initialized.

### Example

```java
int[] myNum = {10, 20, 30};          //declares array with 3 elements
System.out.println(myNum[0]);        //prints 10

int[] myNum2 = new int[5];           //declares empty array with size 5
```

### Getting array length

You can use `array.length` to get the length of an array.

### Example

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
System.out.println(cars.length);                     // Outputs 4
```

## ArrayLists

The ArrayList is a resizable array, which needs to be imported using `import java.util.ArrayList;`.

### ArrayList declaration Example

```java
ArrayList<String> cars = new ArrayList<String>();
```

### Table of common functions for `ArrayList`

Let `cars` be our ArrayList name.

| Function | Description |
| :---: | :---: |
| `cars.get(index)` | Access element in index |
| `cars.add(element)` | Insert element at the end |
| `cars.set(index, element)` | Modifies element in index |
| `cars.remove(index)` | Delete element in index |
| `cars.clear()` | Delete all elements |
| `cars.size()` | Returns *length* of the list |
| `Collections.sort(cars)` | Sorts the list (requires `import java.util.Collections`) |
| `cars.isEmpty()` | Returns `true` if list is empty |

---

# C++

Arrays can be declared through `datatype array[size];`.

Vectors can be declared through `std::vector<datatype> vectorName;`.

## Arrays

The first element in an array is `[0]`. To access an element in an array, you can refer to its index number in square brackets.

The array size is fixed once it is initialized.

### Example

```c++
int myNum[3] = {10, 20, 30};
std::cout << myNum[0];        //prints 10
```

The array size can also be omitted if the elements are immediately initialized. The array will be as big as the number of elements inserted into it.

### Example

```c++
std::string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3
```

### Getting array size / length

You can use the `sizeof()` function to get the size of an array *in bytes*.

To get the *length* of an array, you have to divide the size of the array by the size of the data type it contains.

### Example

```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
int getSize = sizeof(myNumbers);
int getArrayLength = sizeof(myNumbers) / sizeof(int);
std::cout << getSize;                                 //prints 20 (int uses 4 bytes)
std::cout << getArrayLength;                          //prints 5
```

### Note about strings and char*

Strings are treated as character arrays in C++.

Therefore if strings are not used, one string can also be declared using `char*` or `char array[]`.

However, *an array of strings* is declared by `std::string array[]`.

### Example

```c++
char* cstring = "This is a string.";
std::string cppstring = "This is also a string";
```

According to [StackOverflow](https://stackoverflow.com/questions/1287306/difference-between-string-and-char-types-in-c#:~:text=In%20C%20and%20C%2B%2B,know%20their%20length%20without%20counting),
using the `<string>` library is much more programmer-friendly and the benefits of using `char*` or `char array[]` is negligible.

## Vectors

Vectors in C++ are the dynamic arrays that are used to store data (i.e. it is able to resize automatically).

The elements can be accessed using index numbers in a similar way to an array.

### Example

```c++
std::vector<int> vect{ 10, 20, 30 };
 
for (int x : vect){
    std::cout << x << " ";
}
//prints 10 20 30
```

### Table of common functions for `vector`

Let `vect` be our vector name.

| Function | Description |
| :---: | :---: |
| `vect.begin()` | Access the first element |
| `vect.end()` | Access the last element |
| `vect.size()` | The *length* of the vector |
| `vect.capacity()` | The *allocated storage capacity* in the vector |
| `vect.push_back()` | Insert element at the end |
| `vect.pop_back()` | Deletes last element |
| `vect.empty()` | Returns `true` if vect is empty |

---

#### TL;DR:

| Language | Standard Array | Dynamic Collection |
| :---: | :---: | :---: | 
| Python |  |  |
| JavaScript |  |  |
| Java | `datatype array[]` | `ArrayList<datatype> list` |
| C++ | `datatype array[]` | `std::vector<datatype> vect` |
