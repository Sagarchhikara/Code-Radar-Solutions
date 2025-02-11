#include<stdio.h>
void printrevrsetriangle(int n){
    for(int i = n;i >=1;i--){
        for(char ch='A';ch<'A'+i;ch++){
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