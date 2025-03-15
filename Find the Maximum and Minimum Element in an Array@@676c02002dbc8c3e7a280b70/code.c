#include<stdio.h>
int main(){
    int i, n, arr[100];
    
    // Read the size of array
    scanf("%d", &n);
    
    // Read array elements
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]); // Added & operator
    }
    
    // Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];
    
    // Find max and min values
    for(i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    // Print results with proper formatting
    printf("%d ", min);
    printf("%d",max);
    
    return 0;
}