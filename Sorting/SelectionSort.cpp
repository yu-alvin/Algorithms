/***************************
*                          *
*        Alvin Yu          *
*        2/21/2021         *
*        Selection Sort    *
*        Algorithms        *
*                          *
****************************/


#include <iostream>
#include <stdlib.h>

using namespace std;


void swap(int index1, int index2, int theArray[]) {
    
    int temp = theArray[index1];
    theArray[index1] = theArray[index2];
    theArray[index2] = temp;

}

int main() {
    
    srand(time(NULL)); // Random Seed for the RNG

    int numbers[20] {0};
    
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < arraySize; i++) {

        int value = rand() % 100;
        numbers[i] = value;

    }

    cout << " " << endl;
    cout << "This is the original array" << endl;

    for (int i = 0; i < arraySize; i++) {

        cout << numbers[i] << "  ";

    }

    for (int i = 0; i < arraySize; i++) {

        for (int j = i + 1; j < arraySize; j++) {
            
            if (numbers[i] > numbers[j]) {

                swap(i, j, numbers);

            }

        }

    }

    cout << " " << endl;
    cout << "This is the sorted array" << endl;

    for (int i = 0; i < arraySize; i++) {

        cout << numbers[i] << "  ";

    }


    return 0;

}