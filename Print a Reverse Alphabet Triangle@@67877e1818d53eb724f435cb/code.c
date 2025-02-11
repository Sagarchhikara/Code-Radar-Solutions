#include<stdio.h>
void printrevrsetriangle(int n){
    for(int i=n;i>=1;i--){
        for(char ch='A'+i-1;ch>='A';ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printrevrsetriangle(n);
    return 0;
}