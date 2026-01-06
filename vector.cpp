#include "vector.h"

#include <iostream>
using namespace std;


template <typename T>
void Vector<T>::push(T element){

    T* newPushArr;

    newPushArr = new T[sizeInt + 1];

    for (int i = 0; i < sizeInt; i++){
        newPushArr[i] = arrP[i];
    };

    newPushArr[sizeInt] = element;

    delete[] arrP;

    arrP = newPushArr;
    sizeInt++;
    capacity++;

}

template <typename T>
T Vector<T>::pop(){

    T* newPopArr;
    T popped;

    if (sizeInt == 0) {
        return 0;}

    else {

        newPopArr = new T[sizeInt - 1];
        for (int i = 0; i < sizeInt - 1; i++){
            newPopArr[i] = arrP[i];
        }

        popped = arrP[sizeInt -1];
        delete[] arrP;

        arrP = newPopArr;
        sizeInt--;
        capacity--;

        return popped;}
}


template <typename T>
void Vector<T>::insert(T element, int index){

    T* newInsertArr;

    newInsertArr = new T[sizeInt + 1];
    
    for (int i = 0; i < index; i++){
        newInsertArr[i] = arrP[i];
    };

    newInsertArr[index] = element;

    for (int j = index; j <= sizeInt; j++){
        newInsertArr[j] = arrP[j];
    };

    delete[] arrP;

    arrP = newInsertArr;
    sizeInt++;
    capacity++;
}


template <typename T>
int Vector<T>::size(){
    return sizeInt;
}


template <typename T>
T Vector<T>::operator[](int index){

    if (index < 0 || index > capacity){
        cout << "\n** Index out of bounds. **\n";
        return 1;
    }

    else{
    return arrP[index];
    }
}


//Where I am stuck:

//WORKING:
// Syntax for dynamic arrays

//How would I define a vector, a constructor in the class with a dynamiic array



//TO WORK:
// The relationship between the template class, class definition file (interface?) ".h" 
// and the implementation file :
// - How to correctly use templates and how to know when to use them.



