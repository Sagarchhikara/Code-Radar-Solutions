#include <stdio.h>
int main() {
    int a,b,op;
    scanf("%d %d",&a,&b);
    op=a>>b;
    printf("%d",op);
    return 0;
}