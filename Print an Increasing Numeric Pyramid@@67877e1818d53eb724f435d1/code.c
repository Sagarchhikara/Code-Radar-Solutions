#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read input

    for (int i = 1; i <= n; i++) { // Loop for rows
        for (int j = 1; j <= i; j++) { // Loop for columns
            printf("%d ", j); // Print numbers
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
