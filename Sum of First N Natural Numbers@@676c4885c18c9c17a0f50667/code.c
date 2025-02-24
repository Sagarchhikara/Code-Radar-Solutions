#include <stdio.h>

int main() {
    int n, sum = 0;
    
   
    scanf("%d", &n);
    
    // Using a loop to calculate the sum
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    
    // Printing the result
    printf("%d", sum);
    
    return 0;
}
