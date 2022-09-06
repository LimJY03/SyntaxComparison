# Common Collections Operations

The table below shows the list of common operations of collections in featured programming languages (Py, JS, Java, C++, C#)

| Operation | Python | Javascript | Java (ArrayList) | C++ (Vectors) | C# (List) |
| :---: | :---: | :---: | :---: | :---: | :---: |
| Access element | `cars[index]` | | `cars.get(index)` | `vect[index]` | `cars[index]` |
| Insert element at end | `cars.append(element)` | | `cars.add(element)` | `vect.push_back()` | `cars.Add(element)`,<br /> `cars.Insert(index, element)` (by index) |
| Delete element | `cars.pop(index)` or <br />`cars.remove(element)` | | `cars.remove(index)` | `vec.erase(vec.begin() + index);` (by index),<br /> `vect.pop_back()` (last element) | `cars.RemoveAt(index)` |
| Delete *all* elements | `cars.clear()` | | `cars.clear()` | `vect.clear()` | `cars.Clear()` |
| Modify element | `cars[index] = value` | | `cars.set(index, element)` | `vect[index] = value;` | `cars[index] = value;`
| Return length | `len(cars)` | | `cars.size()` | `vect.size()` | `cars.Count` |
| Sort collection | `cars.sort()` | | `Collections.sort(cars)` | `std::sort(vect.begin(), vect.end());` | `cars.Sort()` |
| Access first element | `cars[0]` | | `cars.get(0)` | `vect.begin()` | `cars.First()` |
| Access last element | `cars[-1]` | | `cars.get(list.size() - 1)` | `vect.end()` | `cars.Last()` |
