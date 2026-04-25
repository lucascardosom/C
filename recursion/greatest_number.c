//greatest_number.c
//program to know the greatest number of an array using recursion

#include <stdio.h>

int greatest(int v[], int begin, int end){
    int great;
    if (begin==end){
        return v[end];
    }
    if(v[begin]>greatest(v,begin+1,end)){
          return v[begin];
    }
    else{
        return greatest(v, begin+1, end);
    }
}

int main(){
    int n, i;
    printf("type the size of array:");
    scanf("%d", &n);
    int v[n];
    for(i=0;i<n;i++){
        printf("type the %d element of the array:", i+1);
        scanf("%d", &v[i]);
    }
    printf("the greatest number of the array is: %d", greatest(v,0,n-1));
return 0;
}
