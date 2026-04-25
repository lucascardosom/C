//fibonacci.c
//making the fibonacci sequence until the n-element using recursion 

#include <stdio.h>

int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n>2){
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n, i;
    printf("type the size of fibonacci sequence:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("| %d ", fib(i));
    }
return 0;    
}
