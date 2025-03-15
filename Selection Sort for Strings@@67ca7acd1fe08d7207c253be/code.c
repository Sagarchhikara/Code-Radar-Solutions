#include <stdio.h>
#include <string.h>
void printArray( char arr[][100],int n,const char*message){
    int i;
    printf("%s\n",message);
    for(i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    printf("\n");
}
void selectionSort(char arr[][100],int n){
    int i,j,min_idx;
    char temp[100];
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[min_idx])<0){
                min_idx=j;
            }
        }
        if(min_idx !=i){
           strcpy(temp =arr[i]);
            strpcy(arr[i]=arr[min_idx]);
            strcpy(arr[min_idx]=temp);
        }
    }
}