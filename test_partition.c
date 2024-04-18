#include <stdio.h>

#include "partition.h"

void printArray(Element *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    Element arr[9] = {9, 7, 5, 11, 12, 2, 14, 3, 10};

    printf("Original array: ");
    printArray(arr, 9);

    int pivot = partition(arr, 0, 8);

    printf("Array after partition: ");
    printArray(arr, 9);
    printf("Pivot: arr[%d] = ", pivot);
    element_print(arr[pivot]);
    printf("\n");

    return 0;
}