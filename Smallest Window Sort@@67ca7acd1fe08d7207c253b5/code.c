#include<stdio.h>
#include<stlib.h>
#include<limits.h>
void findUnsortedSubarray(int arr[],int n){
    if(n<=1){
        printf("0\n");
        return;
    }
    int left =0;
    while(left < n-1 && arr[left] <=arr[left+1]){
        left++;
    }
    if(left ==n-1){
        printf("0\n");
        return;
    }
    int right= n-1;
    while(right>0&&arr[right]>= arr[right-1]){
        right--;
    }
    int min_val=INT_MAX;
    int max_val=INT_MIN;
    for(int i=left;i<=right;i++){
        if(arr[i]<min_val){
            min_val=arr[i];
        }
    }
    while(left>0&& arr[left-1]>min_val){
        left--;
    }
    while(right<n-1&& arr[right+1]<max_val){
        right++;
    }
    printf("%d\n",right-left+1);
}