// Your code here...
void bubbleSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            char temp =arr[j];
            arr[j+1]=temp;
            swapped=1;
        }
    }
}
}
void printArray( char arr[],int size){
    for(int i=0;i<size;i++){
        printf("%c ",arr[i]);
    }
    printf("\n");
}