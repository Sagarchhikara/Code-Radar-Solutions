#include<stdio.h>
#include<string.h>
void selectionSort(char arr[],int n){
    int i,j,minIndex;
    char temp;
    for(i=0;i<n-1;i++){
        minIndex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            temp =arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
}
void printArray(char arr[],int n){
    for( int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
    printf("\n");
}