#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int largest, second_largest;
    
    // Input array size
   
    scanf("%d", &n);
    
    // Check if there are at least two elements
    if(n < 2) {
        printf("Not enough elements to find second largest\n");
        return 0;
    }
    
    // Input array elements
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize largest and second_largest with minimum integer value
    largest = second_largest = INT_MIN;
    
    // Find largest
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Find second largest
    for(i = 0; i < n; i++) {
        if(arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    
    // Check if second largest exists
    if(second_largest == INT_MIN) {
        printf("-1");
    } else {
        printf("%d\n", second_largest);
    }
    
    return 0;
}