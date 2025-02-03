#include <stdio.h>
    int getNthbit(int num, int n){
        return(num&(1<<n)?1:0)
    }
    int main(){
        int num,n;
        scanf("%d %d",&num,&n);
        int bitValue=getNthbit(num,n);
        printf("%d",n,num,bitValue);
        return 0;

    }
    