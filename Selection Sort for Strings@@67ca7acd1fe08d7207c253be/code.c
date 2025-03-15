#include <stdio.h>
#include <string.h>
void printArray( char *arr[],int n,const char*message){
    int i;
    printf("%s\n",message);
    for(i=0;i<n,i++){
        printf("%s\n",arr[i]);
    }
    printf("\n");
}
void selectionSort(char*arr[],int n){
    int i,j,min_idx;
    char*temp;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[min_idx])<0){
                min_idx=j;
            }
        }
        if(min_idx !=i){
            temp =arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
        }
    }
}