#include<stdio.h>
#include<string.h>
void caesarCipher(char message[],int key){
    int i;
    for(i=0;i<strlen(message);i++){
        if(message[i]>='A'&& message[i]<='Z'){
            message[i]=((message[i]-'A'+key)%26)+'A'
        }
        else if(message[i]>='a' && message[i]<='z'){
            message[i]=((message[i]-'a'+key)%26)+'a'
        }
    }
}