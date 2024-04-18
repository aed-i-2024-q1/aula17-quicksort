#include <stdio.h>

#include "quicksort.h"

void printArray(Element *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void testArray(Element* arr, int size) {
    printf("Original array: ");
    printArray(arr, size);

    quickSort(arr, size);

    printf("Array after quicksort: ");
    printArray(arr, size);
}

int main() {
    Element arr[9] = {9, 7, 5, 11, 12, 2, 14, 3, 10};
    
    testArray(arr, 9);

    return 0;
}