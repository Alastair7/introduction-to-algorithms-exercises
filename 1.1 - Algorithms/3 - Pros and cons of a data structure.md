### Select a data structure that you have seen, and discuss its strengths and limitations.

An array is a collection of elements which can be accessed by key or index. Each element is allocated next to each other in memory.

#### Pros

- Easy to access elements: Each element can be accesed by key or index.

- Efficient memory usage: Because elements are stored next to each other is more easier to access them that's why is more efficient.

- Fast search and sorting: Since each element is allocated next to each other in memory is more easier to find an element, this is not always efficient though.

- Flexibility in data types: Multiple data types can be created in arrays (int, string, long, decimals, bool...)

- Simple to understand: Array are simple data structures consequently they are easy to understand.

#### Cons

- Fixed Size: When an array is created for the first time It cannot be resized.

- Wastage of memory: Depending on the scenario there could be cases when the number of elements is unknown and to solve this someone may think to create an array of 1000 elements. When the application is used, the client or someone may add just 10 elements and the remaining space is unused.

- Difficulty in inserting and removing items: It takes more time to insert or remove an element from the array because when inserting it's important to ensure that the array has space for one more element, then open space for that element by shifting the others elements. And with removing happens almost the same but a shift is always needed.

- Inneficient of search: An array must be sorted (it could be already) and then it has to be looped element by element until the desired one is found.

- Limited flexibility: Arrays are good at storing different kind of data types but when the time comes to use an object. It becomes more complex to handle since it is needed to create an array of objects.
