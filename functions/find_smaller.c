//find_smaller.c
//find the smaller element in the array and subtract the value of the element from all the others elements of the array

#include <stdio.h>

int menor_ele(int n, int v[n]){
    int i, j, k;
    for(i=0;i<n;i++){
        printf("digite o valor para o elemento:");
        scanf("%d",&v[i]);
    }
    int menor = v[0];
    for(j=1;j<n;j++){
        if(menor>=v[j]){
            menor = v[j];
        }
    }
    for(k=0;k<n; k++){
        v[k] = v[k] - menor;
        printf("%d \n", v[k]);
    }
return 0;
}


int main(){
    int n;
    printf("digite o tamanho do vetor");
    scanf("%d", &n);
    int v[n];
    printf("%d", menor_ele(n,v));
return 0;
}
