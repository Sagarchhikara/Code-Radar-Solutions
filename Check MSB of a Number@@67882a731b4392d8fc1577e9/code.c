#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int msb_mark=1<<31;
    if(a&msb_mark){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    
    return 0;
}