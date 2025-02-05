#include <stdio.h>
int setnthbit(int num,int n){
    return num|(1<<n);
}

int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    int result=setnthbit(num,n);
    printf("%d",result);
    return 0;
}