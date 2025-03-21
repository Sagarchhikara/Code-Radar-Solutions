#include <stdio.h>

// Function to rotate the array to the right by k steps
void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k >= n
    if (k == 0) return; // No need to rotate if k is 0
    
    int temp[k];
    
    // Copy last k elements to temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    // Shift the rest of the elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    // Copy back the k elements from temp to the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
   for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    rotateRight(arr, n, k);
    printArray(arr, n);
    return 0;
}
