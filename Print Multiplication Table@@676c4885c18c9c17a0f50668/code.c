#include <stdio.h>

int main() {
    int n;
    
   
    scanf("%d", &n);
    
    // Using a loop to print the multiplication table
   
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    
    return 0;
}