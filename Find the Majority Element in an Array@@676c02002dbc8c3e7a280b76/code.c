#include <stdio.h>
int findMajorityElement(int arr[], int n) {
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
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
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
        printf("%d", result);
    } else {
        printf("-1\n");
    }
    
    return 0;
}