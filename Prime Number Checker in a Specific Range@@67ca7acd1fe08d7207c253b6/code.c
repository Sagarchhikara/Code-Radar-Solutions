// Your code here...
#include<stdbool.h>
#include<math.h>

bool isPrime(int num){
    if(num<=1) return false;
    if(num==2) return true;
    if(num%2==0) return false;

    for(int i=3;i<=(num);i+=2){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
void printPrimesInRange(int a ,int b){
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d",i);
        }
    }
    printf("\n");
}