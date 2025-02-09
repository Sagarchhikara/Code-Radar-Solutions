#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    switch(a){
        case 'A':
            printf("Excellent\n");
        case 'B':
            printf("Good\n");
        case 'C':
            printf("Average\n");
        case 'D':
            printf("Below Average\n");
        case 'F':
            printf("Fail\n");
        default:
            printf("Inavlid Grade");
    }
    
    return 0;
}