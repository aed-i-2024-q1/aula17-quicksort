#include "partition.h"

#include <stdbool.h>

#define USE_HOARE false

void swap(Element *arr, int i, int j) {
    if (i != j) {
        Element temp = arr[i];
        
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

/**
 * Lomuto partition scheme.
 
*/
int partitionLomuto(Element *arr, int low, int high) {
    Element pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, high);
    return i + 1;
}

/**
 * Hoare partition scheme.
*/
int partitionHoare(Element *arr, int low, int high) {
    Element pivot = arr[low];

    int i = low;
    int j = high + 1;

    while (true) {
        while (arr[++i] < pivot) {
            if (i == high) {
                break;
            }
        }
        while (arr[--j] > pivot) {
            if (j == low) {
                break;
            }
        }
        if (i >= j) {
            break;
        }
        swap(arr, i, j);
    }
    swap(arr, low, j);

    return j;
}


int partition(Element *arr, int low, int high) {
    if (USE_HOARE) {
        return partitionHoare(arr, low, high);
    }
    return partitionLomuto(arr, low, high);
}