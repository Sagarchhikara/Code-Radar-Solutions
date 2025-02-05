#include <stdio.h>
 void swap(int *a,int *b){
    *a=*b^*b;
    *b=*a^*b;
    *a=*a^*b;
 }
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    swap(&num1,&num2);
    printf("%d %d",num1,num2);
    return 0;
}