#include<stdio.h>
#include<string.h>
void selectionSort(char arr[][100],int n){
    int i,j,minIndex;
    char temp[100];
    for(i=0;i<n-1;i++){
        minIndex=i;
        for(j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[minIndex])<0){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[minIndex]);
            strcpy(arr[minIndex],temp);
        }
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printArray("%s\n",arr[i]);
    }
}