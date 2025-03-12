int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;

    // Find the first element which is greater than the next element (start of unsorted part)
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If the array is already sorted
    if (start == -1) {
        return 0;
    }

    // Find the last element which is smaller than the previous element (end of unsorted part)
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find the min and max within the unsorted subarray
    int minVal = arr[start], maxVal = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Expand the left boundary if needed
    for (int i = 0; i < start; i++) {
        if (arr[i] > minVal) {
            start = i;
            break;
        }
    }

    // Expand the right boundary if needed
    for (int i = n - 1; i > end; i--) {
        if (arr[i] < maxVal) {
            end = i;
            break;
        }
    }

    // Length of the subarray that needs to be sorted
    return (end - start + 1);
}
