#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Swap helper
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort function
void bubbleSort(int array[], int length) {
    bool sorted;
    do {
        sorted = true;
        for (int i = 0; i < length - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap(&array[i], &array[i + 1]);
                sorted = false;
            }
        }
    } while (!sorted);
}

// Print array
void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//Initialize Array
void initArray(int* array, int length){
    for (int i = 0; i < length; i++){
        array[i] = lrand48() % length;
    }
}

//Check if array is sorted
bool isSorted(int* array, int length){
    bool sorted = true;
    for (int i = 0; i < length - 1; i++) {
        if (array[i] > array[i + 1]) {
            sorted = false;
        }
    }
    return sorted;
}

// Main function
int main(void) {
    int numElements = 100;
    int numbers[numElements];
    initArray(numbers, numElements);

    printf("Before sorting:\n");
    printArray(numbers, numElements);

    bubbleSort(numbers, numElements);

    printf("After sorting:\n");
    printArray(numbers, numElements);

    printf("Check sorting:\n");
    printf("%b\n", isSorted(numbers, numElements));

    return 0;
}
