// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compressString(char* str, char* compressed) {
    int len = strlen(str);
    if (len == 0) {
        compressed[0] = '\0';
        return;
    }

    int count = 1;
    int pos = 0;
    
    for (int i = 1; i <= len; i++) {
        if (i < len && str[i] == str[i-1]) {
            count++;
        } else {
            // Add character to compressed string
            compressed[pos++] = str[i-1];
            
            // Add count if greater than 1
            if (count > 1) {
                // Convert count to string and add to compressed
                char countStr[20];
                sprintf(countStr, "%d", count);
                int countLen = strlen(countStr);
                strncpy(compressed + pos, countStr, countLen);
                pos += countLen;
            }
            
            count = 1; // Reset count for next character
        }
    }
    
   
    return compressString;
}