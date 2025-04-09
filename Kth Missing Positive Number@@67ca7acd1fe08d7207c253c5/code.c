/**
 * Finds the kth missing positive integer in a sorted array of distinct integers
 * @param arr - the sorted array
 * @param size - size of the array
 * @param k - the k value (which missing number to find)
 * @return the kth missing positive integer
 */
int findKthMissing(int* arr, int n, int k) {
    // Track how many missing numbers we've found
    int missingCount = 0;
    
    // Handle case where missing numbers come before the first element
    if (arr[0] > 1) {
        int beforeFirst = arr[0] - 1;
        if (k <= beforeFirst) {
            return k; // The kth missing is before arr[0]
        }
        missingCount = beforeFirst;
    }
    
    // Check gaps between array elements
    for (int i = 1; i < n; i++) {
        int gap = arr[i] - arr[i-1] - 1;
        if (gap > 0) {
            if (missingCount + gap >= k) {
                // The kth missing is in this gap
                return arr[i-1] + (k - missingCount);
            }
            missingCount += gap;
        }
    }
    
    // If we reached here, the kth missing is after the last element
    return arr[n-1] + (k - missingCount);
}