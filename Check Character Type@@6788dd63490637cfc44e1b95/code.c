#include <stdio.h>
#include<ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel\n",ch);
    }
    else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("Consonant\n",ch);
    }
    else if(isdigit(ch)){
        printf("Digit\n",ch);
    }
    else{
        printf("Special Character\n",ch);
    }
    return 0;
}
    