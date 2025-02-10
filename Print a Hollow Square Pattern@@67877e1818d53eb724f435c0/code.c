#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<2){
        printf("Size should be greater than 2.\n");
        return 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1|| i==n|| j==1|| j==n){
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
   
    return 0;
}