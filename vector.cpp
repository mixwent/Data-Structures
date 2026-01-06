#include VECTOR.H

#include <iostream>
using namespace std;


void Vector::push(T element){

    T* newPushArr;

    newPushArr = new T[size + 1];

    for (int i = 0; i < size; i++){
        newPushArr[i] = arrP[i];
    }

    newPushArr[size] = element;

    delete[] arrP;

    arrP = newPushArr;
    size++;
    capacity++;

}


T Vector::pop(){

    T* newPopArr;
    T popped;

    if (size = 0) {return 0};
    else {

        newPopArr = new T[size - 1];
        for (int i = 0; i < newSize; i++){
            newPopArr[i] = arrP[i];
        }

        popped = arrP[size -1];
        delete[] arrP;

        arrP = newPopArr;
        size--;
        capacity--;

        return popped;
    }
}


void Vector::insert(T element, int index){

    T* newInsertArr;

    newInsertArr = new T[size + 1];
    
    for (int i = 0; i < index; i++){
        newInsertArr[i] = arrP[i];
    }

    newInsertArr[index] = element;

    for (int j = index; j <= size; j++){
        newInsertArr[j] = arrP[j];
    }

    delete[] arrP;

    arrP = newInsertArr;
    size++;
    capacity++;
}

int Vector::size(){
    return s;
}

T Vector::operator[](int index){

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



