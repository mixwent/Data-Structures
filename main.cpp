#include <iostream>
#include "vector.h"
using namespace std;

int main(){

    Vector<int> myVec;
    int element = 0;

    cout << "Enter a List of Positive Integers.\n Type -1 to end list.\n";
    cin >> element;

    while (element != -1){

        myVec.push(element);
        cin >> element;

    };

    cout << "Your vector has " << myVec.size() << " elements.\n";
    cout << "This is your vector:\t{";

    for (int i = 0; i < myVec.size() - 1; i++){

        cout << myVec[i] << ", ";

    }

    cout << myVec[myVec.size() - 1] << "}" << endl;


    return 0;
    

}