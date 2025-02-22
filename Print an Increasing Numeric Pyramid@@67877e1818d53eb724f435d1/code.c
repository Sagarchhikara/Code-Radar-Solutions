#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read input

    for (int i = 1; i <= n; i++) { // Loop for rows
        // Print leading spaces for center alignment
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n"); // Newline after each row
    }

    return 0;
}
