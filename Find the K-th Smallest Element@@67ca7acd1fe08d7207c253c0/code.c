// Your code here...
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int KthSmallest(int arr[],int n,int k){
    if(k<=0||k>n){
        return -1;
    }
    insertionSort(arr,n);
    return arr[k-1];
    
}