# Arrays and Collections

The table of common operations for each collection can be found in [here at Operations.md](https://github.com/LimJY03/SyntaxComparison/blob/main/06.%20Arrays/Operations.md).

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
int[] myNum = {10, 20, 30};                      // declares array with 3 elements
System.out.println(myNum[0]);                    // prints 10

int[] myNum2 = new int[5];                       // declares empty array with size 5
```

### Getting array length

You can use `array.length` to get the length of an array.

### Example

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
System.out.println(cars.length);                  // Outputs 4
```

## ArrayLists

The ArrayList is a resizable array, which needs to be imported using `import java.util.ArrayList;`.

### ArrayList declaration Example

```java
ArrayList<String> cars = new ArrayList<String>();
```

> ### Useful Links:
> 
> * Arrays: [w3schools.com/java](https://www.w3schools.com/java/java_arrays.asp)
> * ArrayLists: [w3schools.com/java](https://www.w3schools.com/java/java_arraylist.asp)

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
std::cout << myNum[0];                              // prints 10

int myNum2[5];                                      // declares empty array with size 5. Do note the "new" keyword is unnecessary in C/C++.
```

The array size can also be omitted if the elements are immediately initialized. The array will be as big as the number of elements inserted into it.

### Example

```c++
std::string cars[] = {"Volvo", "BMW", "Ford"};      // size of array is always 3
```

### Getting array size / length

You can use the `sizeof()` function to get the size of an array *in bytes*.

To get the *length* of an array, you have to divide the size of the array by the size of the data type it contains.

### Example

```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
int getSize = sizeof(myNumbers);
int getArrayLength = sizeof(myNumbers) / sizeof(int);
std::cout << getSize;                               // prints 20 (int uses 4 bytes)
std::cout << getArrayLength;                        // prints 5
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
    std::cout << x << " ";                 // prints 10 20 30
}

```

> ### Useful Links:
> 
> * Arrays: [w3schools.com/cpp](https://www.w3schools.com/cpp/cpp_arrays.asp)

---
# C

Arrays can be declared through `datatype array[size];`.

There is no support for dynamic libraries in base C or its standard libraries.

## Arrays

The first element in an array is `[0]`. To access an element in an array, you can refer to its index number in square brackets.

The array size is fixed once it is initialized.

### Example

```c
int myNum[3] = {10, 20, 30};
printf("%d", myNum[0]);                              // prints 10

int myNum2[5];                                       // declares empty array with size 5. Do note the "new" keyword is unnecessary in C/C++.
```

The array size can also be omitted if the elements are immediately initialized. The array will be as big as the number of elements inserted into it.

### Example

```c
int myNum[] = {10, 20, 30};                          // size of array is always 3
```

### Getting array size / length

You can use the `sizeof()` function to get the size of an array *in bytes*.

To get the *length* of an array, you have to divide the size of the array by the size of the data type it contains.

### Example

```c
int myNumbers[5] = {10, 20, 30, 40, 50};
int getSize = sizeof(myNumbers);
int getArrayLength = sizeof(myNumbers) / sizeof(int);
printf("%d\n", getSize);                             // prints 20 (int uses 4 bytes)
printf("%d", getArrayLength);                        // prints 5
```

### Note about strings and char

Strings are treated as character arrays in C.

An *array of strings* are two dimensional char arrays in C as there is no `string` datatype.

### Example

```c
char cstring[] = "This is a string.";
char stringArray[2][10] = {"String 1", "String 2"};
//num of strings ^ | ^ max length of each string
```


> ### Useful Links:
> 
> * Arrays: [w3schools.com/c](https://www.w3schools.com/c/c_arrays.php)

---

# C#

There are a few way to declare `C#` arrays, one of it being `datatype[] array;`.

ArrayLists can be declared through `List<datatype> listName;`.

## Arrays

The first element in an array is `[0]`. To access an element in an array, you can refer to its index number in square brackets.

The array size is fixed once it is initialized.

### Example

```c#
int[] myNum = {10, 20, 30};                      // declares array with 3 elements
Console.WriteLine(myNum[0]);                     // prints 10

int[] myNum2 = new int[5];                       // declares empty array with size 5
```

### Getting array length

You can use `array.Length` to get the length of an array.

### Example

```c#
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
Console.WriteLine(cars.Length);                  // Outputs 4
```

## Lists

The List is a resizable array for `C#`.

### List declaration Example

```c#
List<string> cars = new List<string>();
```

> ### Useful Links:
> 
> * Arrays: [w3schools.com/cs](https://www.w3schools.com/cs/cs_arrays.php)
> * Lists: [docs.microsoft.com](https://docs.microsoft.com/en-us/dotnet/api/system.collections.generic.list-1?view=net-6.0)

---
#### TL;DR:

| Language | Standard Array | Dynamic Collection |
| :---: | :---: | :---: | 
| Python |  |  |
| JavaScript |  |  |
| Java | `datatype[] array` | `ArrayList<datatype> list` |
| C++ | `datatype array[]` | `std::vector<datatype> vect` |
| C | `datatype array[]` | Not supported in stdlibs. |
| C# | `datatype[] array` | `List<datatype> list` |
