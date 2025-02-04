#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("No se bits found\n");
    }  
else{
int position=0;
while(!(num&1)){
    num>>=1;
    position++;
}
printf("%d",position)
}
return 0;
}