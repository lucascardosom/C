//sum_matrix.c
//calculating the sum of all the elements of the matrix

#include <stdio.h>

int main(){
    int n,m,i,j,sum=0;
    printf("type the size of n and the size of m:");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("type the element M(%dx%d):", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("the sum of all the elements of the matrix is: %d", sum);
return 0;
}
