void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    
    while (message[i] != '\0') {
        // Check if the character is an alphabetic letter
        if ((message[i] >= 'a' && message[i] <= 'z') || (message[i] >= 'A' && message[i] <= 'Z')) {
            // Determine if it's uppercase or lowercase
            char base = (message[i] >= 'a' && message[i] <= 'z') ? 'a' : 'A';
            
            // Convert to 0-25 range, apply shift, and wrap around if needed
            int charIndex = message[i] - base;
            int shiftedIndex = (charIndex + shift) % 26;
            
            // Convert back to ASCII and store in encrypted array
            encrypted[i] = base + shiftedIndex;
        } else {
            // Non-alphabetic characters remain unchanged
            encrypted[i] = message[i];
        }
        i++;
    }
    
    // Add null terminator to the encrypted string
    encrypted[i] = '\0';
}