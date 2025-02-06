#include <stdio.h>
int main() {
    char a;
    scanf("%c",a);
    if(a=='a','e','i','o','u'){
        printf("Vowel")
    }
    else if(ch>='a'&&ch<='z'){
        printf("Consonant")
    }
    else if(isdigit(ch)){
        printf("Digit")
    }
    else{
        printf("Special character")
    }
    
    return 0;
}