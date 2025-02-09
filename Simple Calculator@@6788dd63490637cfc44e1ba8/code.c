#include <stdio.h>
int main() {
   char operat;
   int num1,num2,result;
   scanf("%d %d %c",&num1,&num2,&operat);
   switch(operat){
    case '+':
        result=num1+num2;
        printf("%d",result);
        break;
    case '-':
        result=num1-num2;
        printf("%d",result);
        break;
    case '*':
        result=num1*num2;
        printf("%d",result);
        break;
    case '/':
        printf("%d",num1/num2);
        break;
    default:
        printf("Error");
   }
return 0;
}
