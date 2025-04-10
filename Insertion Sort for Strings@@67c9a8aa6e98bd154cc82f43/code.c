#include <stdio.h>
#include <string.h>

// Function to perform insertion sort on an array of strings in lexicographical order
void insertionSort(char *arr[], int n) {
    int i, j;
    char *key;
    
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        // Move elements that are greater than key to one position ahead of their current position
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(char arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }
}