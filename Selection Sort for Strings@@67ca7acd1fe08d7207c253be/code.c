#include<stdio.h>
#include<string.h>
#define MAX 100
#define SIZE 100
void swap(char str1[],char str2[]){
    char temp[MAX];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
void selectionSort(char arr[][MAX],int n){
    int minIndex;
    for( int i=0;i<n-1;i++){
        minIndex=i;
        for(j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[minIndex])<0){
                minIndex=j;
            }
        }
        if(min_idx!=i){
            swap(arr[i],arr[minIndex])
    }
}
void printArray(char arr[][MAX],int n){
    for(int i=0;i<n;i++){
        printArray("%s\n",arr[i]);
    }
}