#include "quicksort.h"
#include "partition.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define RANDOMIZE true

/**
 * Fisher-Yates shuffle algorithm.
*/
void shuffle(Element *arr, int size) {
    srand(time(NULL));
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        swap(arr, i, j);
    }
}

void quickSortRecur(Element *arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);

        quickSortRecur(arr, low, pivot - 1);
        quickSortRecur(arr, pivot + 1, high);
    }
}

void quickSort(Element *arr, int size) {
    if (RANDOMIZE) {
        shuffle(arr, size);
    }
    quickSortRecur(arr, 0, size - 1);
}