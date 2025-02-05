#include <stdio.h>
int flipbits(int num){
    return ~num;
}
int main() {
     int num;
    scanf("%d",&num);
    int flipped=flipbits(num);
    printf("%d\n", flipped);
    return 0;
}