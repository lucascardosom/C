//average_malloc.c
//leaning to calculate the average of the array using dynamic memory allocation in C

#include <stdio.h>
#include <stdlib.h>

float average(int n, int *v){
    int k, sum=0;
    for (k=0;k<n;k++){
        sum += v[k];
    }
    float av = (float) sum/n;
return av;
}


int main(){
    int n, i;
    printf("type the size of the array:");
    scanf("%d", &n);
    int *v;
    v = (int*) malloc (n * sizeof(int));
    if(v==NULL){
        printf("the memory allocation failed!");
        return 1;
    }
    for (i=0;i<n;i++){
        printf("type the element %d of the array:", i+1);
        scanf("%d", &v[i]);
    }
    printf("the average of the array is: %.2f", average(n,v));
    free(v);
return 0;
}
