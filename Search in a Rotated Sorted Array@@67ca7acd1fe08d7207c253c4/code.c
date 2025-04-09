/**
 * Finds the index of a target value in a rotated sorted array
 * @param nums - sorted array rotated at some pivot
 * @param n - size of the array
 * @param target - value to search for
 * @return index of target or -1 if not found
 */
int search(int arr[], int n, int target) {
    // Handle edge cases
    if (nums == NULL || n <= 0)
        return -1;
    
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Found the target
        if (nums[mid] == target)
            return mid;
        
        // Check if the left half is sorted
        if (nums[left] <= nums[mid]) {
            // Check if target is in the left half
            if (nums[left] <= target && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } 
        // Right half is sorted
        else {
            // Check if target is in the right half
            if (nums[mid] < target && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    
    // Target not found
    return -1;
}