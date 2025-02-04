#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u",&num);
    int count=0;
    if(num==0){
        count=32;
    }
    else{
        while((num&1)==0){
            count++;
            num>>=1;
        }
    }
    printf("%u",count);
    return 0;
}