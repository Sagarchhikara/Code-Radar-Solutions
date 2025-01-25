#include <stdio.h>
int main() {
    double num1,num2,num3,avg;
    scanf("%lf,%lf,%lf",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("Average: %.2lf",avg);
    return 0;
}