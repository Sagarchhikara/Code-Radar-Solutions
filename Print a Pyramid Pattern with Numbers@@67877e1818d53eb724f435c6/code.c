#include <stdio.h>

int main() {
    int height, i, j, k;
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        for (j = i; j < height; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}