//malloc_sum.c
//calculating the sum of the array allocated using malloc, iteration and recursion

#include <stdio.h>
#include <stdlib.h>

int sum_array(int *v, int begin, int n){
    if(begin==n){
        return 0;
    }
    else{
        return v[begin]+ sum_array(v, begin + 1, n);
    }
}

int main(){
    int n, i;
    printf("enter the array's size:");
    scanf("%d", &n);
    if(n<1){
        printf("n must be >=1!");
        return 1;
    }
    int *v = (int*) malloc (n * sizeof(int));
    if(v==NULL){
        printf("error in malloc!");
        return 1;
    }
    for (i=0; i<n; i++){
        printf("enter the element v[%d]:", i);
        scanf("%d", &v[i]);
    }
    printf("the array's sum is: %d\n", sum_array(v, 0, n) );
    free(v);
return 0;
}
