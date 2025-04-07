#include<stdio.h>
int findmajorityelement(int arr[],int n){
    int candidate=-1;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
            count=1;
        }
        else if(candidate==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=findmajorityelement(arr,n);
    if(result!=-1){
        printf("%d",result);
    }
    else{
        return -1;
    }
    return 0;
}