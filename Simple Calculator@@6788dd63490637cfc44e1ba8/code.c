#include <stdio.h>
int main() {
    int a,b,op;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case +:
            op=a+b;
            printf("%d",op);
        case - :
            op=a-b;
            printf("%d",op);
        case *:
            op=a*b;
            printf("%d",op);
        case % :
            op=a%b;
            printf("%d",op);
        default:
            printf("Invalid operation");
    }
    return 0;
}
            
    }
    printf("%s", welcome());
    return 0;
}