#include <stdio.h>
void decimaltobinary(int num){
    if (num==0){
        printf("0\n");
        return;
    }
    for (int i=31;i>=0;i--){
        printf("%d",(num>>i)&1);
    }
    printf("\n");
}
int main() {
    int num;
    scanf("%d",&num);
    decimaltobinary(num);
   return 0;
}