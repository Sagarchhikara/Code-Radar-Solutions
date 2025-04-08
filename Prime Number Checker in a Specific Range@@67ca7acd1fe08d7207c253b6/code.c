#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find and print primes in range [a, b]
void printPrimesInRange(int a, int b) {
    
    // Ensure we start from the smaller number
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

