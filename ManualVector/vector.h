//#ifndef 
//#define

//#include
#include <iostream.
using namespace std;

class Vector{

    public :

        //Constructors:
        Vector(){};
        Vector(int size){};

        //Member functions:
        void push(T element); //Adds element to end of vector.
        T pop(); //Returns elements at end of vector.
        void insert(int index); //Adds element at index.

        //REVISIT***:
        T operator[int index];  //returns element at index.

        //Destructor:
        ~Vector(){};

}