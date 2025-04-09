// Your code here...
#inlude<string.h>
int digitRightShift(int N){
    char numStr[20];
    sprintf(numStr,"%d",N);
    int len =strlen(numStr);
    if(len==1){
        return N;
    }
    char lastDigit=numStr[len-1];
    for(int i=len-1;i>0;i--){
        numStr[i]=numStr[i-1];
    }
    numStr[0]=lastDigit;
    int shiftedNum;
    scanf(numStr;"%d",&shiftedNum);
    return shiftedNum;
}