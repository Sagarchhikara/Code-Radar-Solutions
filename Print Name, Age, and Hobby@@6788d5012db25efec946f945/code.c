#include <stdio.h>
int main() {
    int age;
    char name[100],hobby[100];
    scanf("%d",&age);
    scanf("%99s",name);
    scanf("%99s",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}