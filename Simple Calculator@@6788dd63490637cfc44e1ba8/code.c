#include <stdio.h>
int main() {
    int a,b,op;
    char c;
    scanf("%d %d ",&a,&b);
    scanf("%c",&c);
    if(c=='+'){
        op=a+b;
        printf("%d",op);
    }
    else if(c=='-'){
        op=a-b;
        printf("%d",op);
    }
    else if(c=='*'){
        op=a*b;
        printf("%d",op);
    }
    else if(c=="/"){
        op=a/b;
        printf("%d",op);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
   
