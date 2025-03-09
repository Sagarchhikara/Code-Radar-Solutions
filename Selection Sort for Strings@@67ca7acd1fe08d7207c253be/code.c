#include<stdio.h>
#include<string.h>
#define MAX_STRINGS 100
#define MAX_LENGTH 100
void selectionSort(char arr[][MAX_LENGTH],int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[min_idx])<0){
                min_idx=j
            }
        }
        if(min_idx!=i){
            char temp[MAX_LENGTH];
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[min_idx]);
            strcpy(arr[min_idx],temp);
        }
    }
}