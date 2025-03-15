#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second_largest;
    
    scanf("%d", &n);
    
    // Input array elements
  
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize largest and second_largest
    largest = second_largest = arr[0];
    
    // Find largest and second largest
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    // Check if second largest exists
    if(largest == second_largest) {
        printf("-1");
    } else {
        printf("%d\n", second_largest);
    }
    
    return 0;
}