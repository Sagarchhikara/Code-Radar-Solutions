#include <stdio.h>
#include <string.h>

// Function to sort an array of strings using bubble sort algorithm
void bubbleSort(char arr[][100], int n) {
    int i, j;
    char temp[100];
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Compare adjacent strings
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap strings if they are in wrong order
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

// Function to print the array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
