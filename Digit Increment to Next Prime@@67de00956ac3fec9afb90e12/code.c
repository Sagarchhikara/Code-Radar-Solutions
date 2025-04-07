// Your code here...
int incrementToPrimeDigits(int N) {
    // If N is 0, return 2 (the first prime digit)
    if (N == 0) {
        return 2;
    }
    
    // Initialize result variable
    long long result = 0;
    
    // Initialize multiplier for building the new number
    long long multiplier = 1;
    
    // Process each digit from right to left
    while (N > 0) {
        // Extract the rightmost digit
        int digit = N % 10;
        
        // Find the next prime digit
        int nextPrime = 0;
        
        if (digit < 2) {
            // 0,1 -> 2
            nextPrime = 2;
        } else if (digit < 3) {
            // 2 -> 3
            nextPrime = 3;
        } else if (digit < 5) {
            // 3,4 -> 5
            nextPrime = 5;
        } else if (digit < 7) {
            // 5,6 -> 7
            nextPrime = 7;
        } else {
            // 7,8,9 -> 2 (wrap around)
            nextPrime = 2;
        }
        
        // Add this transformed digit to the result
        result = result + (nextPrime * multiplier);
        
        // Move to the next digit
        N /= 10;
        multiplier *= 10;
    }
    
    return result;
}