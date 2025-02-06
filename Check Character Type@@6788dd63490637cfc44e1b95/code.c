#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a','e','i','o','u'){
        printf("Vowel");
    }
    else if(a>='a'&&a<='z'){
        printf("Consonant");
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    
    return 0;
}