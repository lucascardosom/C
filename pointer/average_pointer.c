//average_pointer.c
//getting the average of an array using pointer without using directly v[i]

#include <stdio.h>

float aver(int n, int v[n]){
    int k, sum = 0;
    float average;
    for (k=0;k<n;k++){
        sum += *(v+k);
    }
    return average = 1.0*sum/n*1.0;
}

int main(){
    int n, i;
    printf("type the size of the array:");
    scanf("%d", &n);
    int v[n];
    for (i=0; i<n; i++){
        printf("type the element %d of the array:", i+1);
        scanf("%d", (v+i));
    }
    printf("the average of the array is: %.2f", aver(n, v));
return 0;
}
