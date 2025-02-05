#include <stdio.h>
void decimaltobinary(int num){
    int binary[32],i=0;
    if (num==0){
        printf("0\n");
        return;
    }
    while(num>0){
        binary[i++]=num%2;
        num /= 2;
    }
    for (int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    printf("\n");
}
int main() {
    int num;
    scanf("%d",&num);
    decimaltobinary(num);
   return 0;
}