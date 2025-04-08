#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    
    // Check using 6k +/- 1 optimization
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Function to print all prime numbers in the range [a,b]
void printPrimesInRange(int a, int b) {
    printf("Prime numbers between %d and %d are:\n", a, b);
    
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
