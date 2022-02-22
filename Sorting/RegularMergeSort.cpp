#include <iostream>
#include <stdlib.h>
using namespace std;


void swap(int index1, int index2, int theArray[]) {
    
    int temp = theArray[index1];
    theArray[index1] = theArray[index2];
    theArray[index2] = temp;

}

void mergeSort(){
    
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

    // Merge Sort goes here





    cout << " " << endl;
    cout << "This is the sorted array" << endl;

    for (int i = 0; i < arraySize; i++) {

        cout << numbers[i] << "  ";

    }


    return 0;

}