#include<stdio.h>
int main(){
    int n,i,j;
    int t[100],freq[100];
    int count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
        freq[i]=-1
    }
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(t[i]==t[j]){
                count++;
                freq[j]=0
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%d %d\n",t[i],freq[i]);
        }
    }
    return 0;
}