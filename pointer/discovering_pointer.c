//discovering_pointer.c
//learning how to use pointers, value and memory adress in C language

#include <stdio.h>

void main(){
    int x = 10;
    int *p = &x;
    printf("valor de x é:%d",x);
    printf("endereço de de x é:%d", &x);
    printf("valor atraves do ponteiro é:%d", *p);
}
