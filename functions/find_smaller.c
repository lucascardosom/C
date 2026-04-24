//find_smaller.c
//find the smaller element in the array and subtract the value of the element from all the others elements of the array

#include <stdio.h>

int smaller_element(int n, int v[n]){
    int i, j, k;
    for(i=0;i<n;i++){
        printf("type the value for the element:");
        scanf("%d",&v[i]);
    }
    int smaller = v[0];
    for(j=1;j<n;j++){
        if(smaller>=v[j]){
            smaller = v[j];
        }
    }
    for(k=0;k<n; k++){
        v[k] = v[k] - smaller;
        printf("%d \n", v[k]);
    }
return 0;
}


int main(){
    int n;
    printf("type the array's size:");
    scanf("%d", &n);
    int v[n];
    printf("%d", smaller_element(n,v));
return 0;
}
