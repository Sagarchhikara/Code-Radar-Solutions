#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n); // Input the number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces to center the pyramid
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print numbers in decreasing order (excluding the last number)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}