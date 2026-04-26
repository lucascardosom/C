//discovering_pointer.c
//learning how to use pointers, value and memory adress in C language

#include <stdio.h>

void main(){
    int x = 10;
    int *p = &x;
    printf("the value of x is:%d",x);
    printf("the memory adress of x is:%d", &x);
    printf("the value from pointer is:%d", *p);
}
