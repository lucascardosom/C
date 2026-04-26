//variable_value.c
//changing the value of two variables using pointer 

#include <stdio.h>

int main(){
    int a = 10, b = 20;
    int *pa = &a;
    int *pb = &b;
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("value of a (old b): %d", *pa);
    printf("value of b (old a): %d", *pb);
return 0;
}
