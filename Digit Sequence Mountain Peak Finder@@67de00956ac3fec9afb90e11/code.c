// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int mountainPeak(int N) {
    char numStr[20];
    sprintf(numStr, "%d", N);
    int len = strlen(numStr);

    // A mountain must have at least 3 digits
    if (len < 3) {
        return -1;
    }

    int peakPos = -1;
    bool increasing = true;

    // Check for strictly increasing sequence
    for (int i = 0; i < len - 1; i++) {
        if (numStr[i] >= numStr[i + 1]) {
            peakPos = i;
            break;
        }
    }

    // If no peak found (all digits increasing), not a mountain
    if (peakPos == -1) {
        return -1;
    }

    // Check if peak is at the ends (invalid mountain)
    if (peakPos == 0 || peakPos == len - 1) {
        return -1;
    }

    // Check for strictly decreasing sequence after peak
    for (int i = peakPos; i < len - 1; i++) {
        if (numStr[i] <= numStr[i + 1]) {
            return -1;
        }
    }

    // Return the peak digit
    return numStr[peakPos] - '0';
}
