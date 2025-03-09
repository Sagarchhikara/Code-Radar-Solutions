#include<stdio.h>
#include<string.h>
#include<ctype.h>
void caesarCipher(char message[],int shift, char result[],int encrypt){
   int i;
   for(i=0;message[i]!='\0';i++){
    if(isalpha(message[i])){
        char base= isupper(message[i])?'A':'a';
        if(encrypt){
            result[i]=(message[i]-base-shift+26)%26+base;
        }
    }else{
        result[i]=message[i];
    }
   } 
   result[i]='\0';
}