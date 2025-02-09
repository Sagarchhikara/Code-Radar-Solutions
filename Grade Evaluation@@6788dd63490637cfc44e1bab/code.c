#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    switch(a){
        case 'A':
            printf("Excellent");
        case 'B':
            printf("Good");
        case 'C':
            printf("Average");
        case 'D':
            printf("Below Average");
        case 'F':
            printf("Fail");
        default:
            printf("Inavlid grade");
    }
    
    return 0;
}