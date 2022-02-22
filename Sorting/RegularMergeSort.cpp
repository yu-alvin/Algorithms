#include <iostream>
#include <stdlib.h>
using namespace std;

const int MAX_VAL = 20;


void combineArray(int arrayA[], int arrayB[]) {

    int arraySizeA = sizeof(arrayA) / sizeof(arrayA[0]);
    int arraySizeB = sizeof(arrayB) / sizeof(arrayB[0]);

    for (int i = 0; i < arraySizeA; i++){
        
    }

}

void mergeSort(int numbers[]) {

    //leftarray, rightarray
    //combine mergeSort(leftarray) and mergeSort(Rightarray)

    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    int leftArray[MAX_VAL] = {};
    int rightArray[MAX_VAL] = {};
    
    if (arraySize > 1) {

        for (int i = 0; i <= arraySize/2; i++) {
            
            leftArray[i] = numbers[i];

        }

        for (int j = arraySize/2 + 1; j < arraySize; j++) {
            
            rightArray[j] = numbers[j];

        }

        mergeSort(leftArray);
        mergeSort(rightArray);
        combineArray(leftArray, rightArray);
       
    }

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