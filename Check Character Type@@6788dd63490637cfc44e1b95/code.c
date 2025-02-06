#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='i'||a=='e'||a=='o'||a=='u'){
        printf("Vowel\n",a);
    }
    else if(a>='a'&&a<='z'){
        printf("Consonant\n",a);
    }
    else if(isdigit(a)){
        printf("Digit\n",a);
    }
    else{
        printf("Special character\n",a);
    }
    
    return 0;
}