//#ifndef 
//#define

//#include
#include <iostream>
using namespace std;

class Vector{

    public :

        //Constructor:
        Vector(){};

        Vector(int s){
            arrP = new T[s]; //initialising dynamic array.
            size = s; //Storing the size for member functions
        }


        //Member functions:
        void push(T element); //Adds element to end of vector.
        T pop(); //Returns elements at end of vector.
        void insert(T element, int index); //Adds element at index.
        int size();
        T operator[]();  //returns element at index.

        //Destructor:
        ~Vector(){};

    private : 

        //Member variables:
        T* arrP;
        int size;

        
};