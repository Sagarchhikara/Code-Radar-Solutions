#include <stdio.h>

int main() {
    int height, i, j;
    scanf("%d", &height);
    for (i = 1; i <= height; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}