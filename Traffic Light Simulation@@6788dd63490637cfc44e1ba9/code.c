#include <stdio.h>
int main() {
    char light;
    scanf("%c",&light)
    switch(light){
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("Go");
        case 'Y':
            printf("Slow Down");
        default:
            printf("Invalid input");
    }
   
    return 0;
}