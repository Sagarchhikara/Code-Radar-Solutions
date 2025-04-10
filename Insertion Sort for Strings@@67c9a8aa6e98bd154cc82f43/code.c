#include<string.h>
void insertionSort(char arr[][100], int n) {
    int i, j;
    char key[100];
    
    for (i = 1; i < n; i++) {
        strcpy(key, arr[i]);
        j = i - 1;
        
        // Move elements that are greater than key to one position ahead
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]);
            j = j - 1;
        }
        strcpy(arr[j + 1], key);
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}