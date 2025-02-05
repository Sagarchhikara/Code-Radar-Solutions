#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a % 4==0){
        printf("Leap Year");
    }
    else if(a % 100==0){
        if(a%400==0){
            printf("Leap year");
        }
    }
    else{
        printf("Not a leap year");
        
    }
    
    return 0;
}