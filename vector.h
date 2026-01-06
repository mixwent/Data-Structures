#ifndef VECTOR_H
#define VECTOR_H

//#include
#include <iostream>
using namespace std;

template <typename T>

class Vector{

    private : 

        //Member variables:
        T* arrP;
        int sizeInt = 0;
        int capacity = 0;


    public :

        //Constructor:
        // Vector(){

        //     arrP = nullptr; //initialising dynamic array.
        //     s = 0; //Storing the size for member functions
        //     c = 0;
        // }

        Vector() : arrP(nullptr), sizeInt(0), capacity(0) {};


        //Member functions:
        void push(T element); //Adds element to end of vector.
        T pop(); //Returns elements at end of vector and decreases size by
        void insert(T element, int index); //Adds element at index.
        int size();
        T operator[](int index);  //returns element at index.

        //Destructor:
        ~Vector(){

            delete[] arrP;
        };

        
};

#include "vector.cpp"

#endif