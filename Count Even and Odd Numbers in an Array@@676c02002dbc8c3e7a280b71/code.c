#include<stdio.h>
int main(){
    int i,n,arr[100];
    int odd_count=0,even_count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]/2==0){
            even_count+=;
        }
        else{
            odd_count+=;
        }
    }
    printf("%d",even_count);
    printf("%d",odd_count);
    return 0;

}