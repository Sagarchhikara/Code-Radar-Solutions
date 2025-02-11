#include <stdio.h>
void printdiamond(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=(i<=n)?(2*i-1):(2(2*n-i)-1);
        int spaces=n-(i<=n?i:(2*n-1));
    for(int s=0; s<spaces,s++) printf(" ");
    for (int s=0;s<stars; s++) printf("*");
    printf("\n");
        }
}
int main(){
    int n;
    scanf("%d",&n);
    printdiamond(n);
    }