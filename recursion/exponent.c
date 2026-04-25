//exponent.c
//getting the x to the power of n using recursion to small numbers

#include <stdio.h>

int expo(int x, int n){
    if (n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    if(n>1){
        return x*expo(x,n-1);
    }
}

int main(){
    int x, n;
    printf("type the number x (base) and the number n (exponent): ");
    scanf("%d %d", &x, &n);
    printf("%d^%d is: %d ", x, n, expo(x,n));
return 0;
}
