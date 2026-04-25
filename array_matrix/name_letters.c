//name_letters.c
//getting how many letters tha name typed has using basic structures in C language

#include <stdio.h>

int main(){
    char name[50];
    int i = 0, size = 0;
    printf("type your name:");
    scanf("%49s", name);
    while (name[i] != '\0'){
        size += 1;
        i += 1;
    }
    printf("your name has %d letters", size);
return 0;
}
