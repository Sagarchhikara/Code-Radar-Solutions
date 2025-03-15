#include<stdio.h>
int main(){
    int i,n,arr[100];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
        printf("%d",arr[i]);
    }
    else if(arr[i]>arr[n-1]){
        printf("%d",arr[n-1]);
    }
    else{
        printf("-1");
    }
    return 0;
}