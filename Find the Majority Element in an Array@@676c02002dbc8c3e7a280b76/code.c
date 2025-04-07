#include <stdio.h>

/*
 * Function to find the majority element in an array
 * A majority element appears more than n/2 times
 * Returns the majority element or -1 if none exists
 */
int findMajorityElement(int arr[], int n) {
    // Moore's Voting Algorithm
    
    // Step 1: Find a candidate for majority element
    int candidate = -1;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (candidate == arr[i]) {
            count++;
        } else {
            count--;
        }
    }
    
    // Step 2: Verify if the candidate is actually a majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    
    // Return the candidate if it appears more than n/2 times, otherwise return -1
    return (count > n / 2) ? candidate : -1;
}

int main() {
    int n;
    
    
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid array size\n");
        return 1;
    }
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = findMajorityElement(arr, n);
    
    if (result != -1) {
        printf("The majority element is: %d\n", result);
    } else {
        printf("-1\n");
    }
    
    return 0;
}