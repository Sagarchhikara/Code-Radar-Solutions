#include<stdio.h>
#include<math.h>
int isPrime(int num){
    if(num<=1){
        return 0;
    }
    else if(num<=3){
        return 1;

    }
    else if(num%2==0|| num %3==0){
        return 0;
    }
    int i=5;
    while(i*i<num){
        if(num%i==0||num%(i+2)==0){
            return 0;
        }
        i+=6;
    }
    return 1;
}