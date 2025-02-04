#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u",&num);
    unsigned int flipped=~num;
    printf("%u", flipped);
    return 0;
}