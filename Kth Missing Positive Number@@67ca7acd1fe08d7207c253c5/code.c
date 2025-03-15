int findKthMissing(int arr[], int size, int k) {
    int missing_count = 0;
    int current = 1;  // Start checking from the first positive integer
    int i = 0;
    
    // Continue until we find the kth missing positive integer
    while (missing_count < k) {
        // If we've checked all array elements or current number is less than the current array element
        if (i >= size || current < arr[i]) {
            missing_count++;  // We found a missing number
            
            // If this is the kth missing number, return it
            if (missing_count == k) {
                return current;
            }
            current++;  // Move to the next positive integer
        }
        // If the current positive integer exists in the array, skip it
        else if (current == arr[i]) {
            current++;  // Move to the next positive integer
            i++;        // Move to the next array element
        }
        // If the current positive integer is greater than the array element (shouldn't happen in sorted array)
        else {
            i++;  // Move to the next array element
        }
    }
    
    return -1;  // If k is too large, return -1 (though we'll always find a solution for positive k)
}

/**
 * Function to print an array
 * @param arr The array to be printed
 * @param size The size of the array
 */
void printArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
