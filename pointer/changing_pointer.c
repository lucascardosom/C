//changing_pointer.c
//learning how to use pointer to change the value of a variable

#include <stdio.h>

int main(){
    int x = 5;
    int *p = &x;
    *p = 20;
    printf("%d", x);
return 0;
}
