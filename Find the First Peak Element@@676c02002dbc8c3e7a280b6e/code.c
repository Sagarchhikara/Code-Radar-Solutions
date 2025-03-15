#include<stdio.h>
int main(){
    int i,n,arr[100];
   
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int found = -1;
    for(i=1; i<n-1; i++){
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
            found = arr[i];
            break;
        }
    }
    if(found != -1){
        printf("%d", found);
    } else if(n > 0 && arr[n-1] > arr[n-2]){
        printf("%d", arr[n-1]);
    } else {
        printf("-1");
    }
    return 0;
}