#include <string.h>
void compressString(char *str, char *compressed) {
    int len = strlen(str);
    
    // If string is empty, just copy an empty string
    if (len == 0) {
        compressed[0] = '\0';
        return;
    }
    
    int compressedIndex = 0;
    char currentChar = str[0];
    int count = 1;
    
    // Iterate through the string, starting from the second character
    for (int i = 1; i <= len; i++) {
        // If the current character is the same as the previous one
        if (i < len && str[i] == currentChar) {
            count++;
        } else {
            // Add the character to the compressed string
            compressed[compressedIndex++] = currentChar;
            
            // If the count is greater than 1, add the count as a character
            if (count > 1) {
                // Convert count to string and append
                int digits = 0;
                int temp = count;
                
                // Count number of digits in the count
                while (temp > 0) {
                    temp /= 10;
                    digits++;
                }
                
                // Add digits to compressed string
                temp = count;
                for (int j = digits - 1; j >= 0; j--) {
                    compressed[compressedIndex + j] = '0' + (temp % 10);
                    temp /= 10;
                }
                compressedIndex += digits;
            }
            
            // Reset for the next character
            if (i < len) {
                currentChar = str[i];
                count = 1;
            }
        }
    }
    
    // Null terminator
    compressed[compressedIndex] = '\0';
    
    // If compressed string is not shorter, copy the original string
    if (strlen(compressed) >= len) {
        strcpy(compressed, str);
    }
}