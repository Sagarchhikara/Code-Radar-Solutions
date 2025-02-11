#include <stdio.h>
void printpalindromictri(int n){
    for(int i=1; i<=n;i++){
        for(int space =0; space < n-i;space++){
            printf(" ");
        }
        for(int num=1;num<=i;num++){
            printf("%d",num);
        }
        for(int num=i-1;num>=1;num--){
            printf("%d",num);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printpalindromictri(n);
    return 0;
}