#include<stdio.h>
#include<string.h>
void caesarCipher(char message[],int shift,char encrypted){
    int i;
    for(i=0;message[i]!='\0';i++){
        if(message[i]>='A'&& message[i]<='Z'){
            message[i]=((message[i]-'A'+key)%26)+'A';
        }
        else if(message[i]>='a' && message[i]<='z'){
            message[i]=((message[i]-'a'+key)%26)+'a';
        }
        else{
            encrypted[i]=message[i];
        }
    }
    encrypted[i]='\0';
}