//sum_sequence.c
//calculating the sum of the first 50 elements of the sequence: S = 2/1*(x^4) + 4/3*(x^5) + 8/5*(x^6) + 16/7*(x^7) + ...



#include <stdio.h>


int main(){
    double a, pot, sum = 0.0;
    int b, x, i;
    printf("enter the x:");
    scanf("%d", &x);
    if (x==0){
        printf("x has to be greater than 0");
        return 1;
    }
    a = 2.0;
    b = 1;
    pot = x*x*x*x;
    for (i=1; i<=50; i++){
        sum = sum + (a/(b*pot));
        a = a * 2;
        b = b + 2;
        pot = pot * x;
    }
    printf("the sum is: %.10f\n", sum);
return 0;
}         