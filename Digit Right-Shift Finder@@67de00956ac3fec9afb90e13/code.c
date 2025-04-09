#include <stdio.h>
#include <string.h>

int digitRightShift(int N) {
    char numStr[20]; // Buffer to hold the number as string
    sprintf(numStr, "%d", N); // Convert number to string
    int len = strlen(numStr);
    
    if (len == 1) {
        return N; // Single digit number remains same after shift
    }
    
    // Perform cyclic right shift
    char lastDigit = numStr[len - 1];
    for (int i = len - 1; i > 0; i--) {
        numStr[i] = numStr[i - 1];
    }
    numStr[0] = lastDigit;
    
    // Convert back to integer
    int shiftedNum;
    sscanf(numStr, "%d", &shiftedNum);
    
    return shiftedNum;
}

}