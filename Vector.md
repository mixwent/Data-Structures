
# Vector 

## Goal 

The purpose of this exercise is to develop an analogue to the [C++ vector datastructure](https://cplusplus.com/reference/vector/vector/). The created datastructure will serve as a dynamically resizable form of storage that allows for random access of stored elements.

## Requirements 

There should be a single 'Vector' class. This class should be a template class, able to store any objects of some type 'T' (an initial implementation can be created that is type specific, then this template functionality can be added later). This class should be declared in 'vector.h' and implemented in 'vector.cpp'.

Public member functions for the class should include:

- push -> adds an element to the end of the vector
- pop -> returns the element at the end of the vector and decreases vector size by one. Should throw an exception if vector is of size 0
- insert -> should insert a value at the index specified. Elements after the index will 'shift' up. If the index is out of bounds an exception should be thrown
- size -> returns the current size of the vector (number of elements stored)
- operator[] -> should return the object at the specified index. If the index is out of bounds an exception should be thrown
- default constructor with no input parameters 
- default constructor taking in an initial size and array to initialize the contents of the vector
- destructor to deallocate any dynamic memory

There should exist a stub program that tests the functions above, and further tests edge cases. The class should also deallocate any allocated memory.

Functions should be commented appropriately, according to the standard

## Restrictions 

No smart pointers can be used.
No datastructures from the C standard library may be imported. 

## Bonus Points 

- implement a copy constructor and override the assignment (=) operator




Why do I have to include the cpp file in the header.
Why do I have to add the template syntax before each function in cpp.