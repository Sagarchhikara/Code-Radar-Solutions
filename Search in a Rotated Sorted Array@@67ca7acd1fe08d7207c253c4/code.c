int searchInRotatedArray(int* arr, int n, int target) {
    // Handle edge cases
    if (arr == NULL || n <= 0)
        return -1;
    
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Found the target
        if (arr[mid] == target)
            return mid;
        
        // Check if the left half is sorted
        if (arr[left] <= arr[mid]) {
            // Check if target is in the left half
            if (arr[left] <= target && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } 
        // Right half is sorted
        else {
            // Check if target is in the right half
            if (arr[mid] < target && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    
    // Target not found
    return -1;
}
