//#ifndef 
//#define

//#include
#include <iostream>
using namespace std;

class Vector{

    public :

        //Constructor:
        Vector(){};

        Vector(){

            arrP = nullptr; //initialising dynamic array.
            s = 0; //Storing the size for member functions
            capacity = 0;
        }


        //Member functions:
        void push(T element); //Adds element to end of vector.
        T pop(); //Returns elements at end of vector and decreases size by
        void insert(T element, int index); //Adds element at index.
        int size();
        T operator[](int index);  //returns element at index.

        //Destructor:
        ~Vector(){};

    private : 

        //Member variables:
        T* arrP;
        int s = 0;
        int capacity = 0;

        
};