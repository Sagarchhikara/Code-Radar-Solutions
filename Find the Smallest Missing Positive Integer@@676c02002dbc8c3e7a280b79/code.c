#include <stdio.h>
#include <stdlib.h>

int findSmallestMissingPositive(int arr[], int n) {
    // Step 1: Mark all positive numbers in the array
    for (int i = 0; i < n; i++) {
        // Ignore non-positive or too large numbers
        if (arr[i] <= 0 || arr[i] > n) {
            continue;
        }
        
        int pos = arr[i] - 1; // Convert to 0-indexed
        
        // Mark the position by making the value negative
        // but only if it's not already marked
        if (arr[pos] > 0) {
            arr[pos] = -arr[pos];
        }
    }
    
    // Step 2: Find the first position that isn't marked negative
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            return i + 1; // Convert back to 1-indexed
        }
    }
    
    // If all positions are marked, the answer is n+1
    return n + 1;
}

int main() {
    int n;
    
    // Get the size of the array
   
    scanf("%d", &n);
    
    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
       
        return 1;
    }
    
    // Input array elements
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find the smallest missing positive integer
    int result = findSmallestMissingPositive(arr, n);
    
    // Output the result
    printf("%d", result);
    
    // Free allocated memory
    free(arr);
    
    return 0;
}