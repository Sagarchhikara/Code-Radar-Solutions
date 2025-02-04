#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("No se bits found\n");
        
    
    return 0;
}
int pos=1;
while((num&1)==0){
    num>>=1;
    pos++;
}
}