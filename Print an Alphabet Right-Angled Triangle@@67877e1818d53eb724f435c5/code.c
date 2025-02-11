#include <stdio.h>

int main() {
    int height, i, j;
    char letter;

    scanf("%d", &height);
    for (i = 1; i <= height; i++) {
        letter = 'A'; 
        for (j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++; 
        }
        printf("\n");
    }

    return 0;
}