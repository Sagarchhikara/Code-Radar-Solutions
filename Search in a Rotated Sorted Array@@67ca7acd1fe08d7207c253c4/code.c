int searchInRotatedArray(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Found the target
        if (arr[mid] == target) {
            return mid;
        }
        
        // Check if the left half is sorted
        if (arr[left] <= arr[mid]) {
            // Target is in the left sorted half
            if (arr[left] <= target && target < arr[mid]) {
                right = mid - 1;
            } else {
                // Target is in the right half
                left = mid + 1;
            }
        } 
        // Right half is sorted
        else {
            // Target is in the right sorted half
            if (arr[mid] < target && target <= arr[right]) {
                left = mid + 1;
            } else {
                // Target is in the left half
                right = mid - 1;
            }
        }
    }
    
    // Target not found
    return -1;
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
