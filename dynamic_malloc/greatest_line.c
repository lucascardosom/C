//greatest_line.c
//using dynamic malloc, pointer, recursion and iteration to get the greatest elements of each line of the matrix

#include <stdio.h>
#include <stdlib.h>

int greatest(int *mat, int a, int m){
    if(a==m-1){
        return mat[a];
    }
    if(mat[a] > greatest(mat, a + 1, m)){
        return mat[a];
    }
    else{
        return greatest(mat, a + 1, m); 
    }
}

int main(){
    int n, m, i, j;
    printf("enter the n size of matrix:");
    scanf("%d", &n);
    printf("enter the m size of matrix:");
    scanf("%d", &m);
    int gt[n];
    int **mat = (int**) malloc (n * sizeof(int*));
    for (i=0; i<n; i++){
        mat[i] = (int*) malloc (m * sizeof(int));
    }
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            printf("enter the element Mat[%d][%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i=0; i<n; i++){
        gt[i] = greatest(mat[i], 0, m);
    }
    printf("the array of the greatest of each line is:\n");
    for (i=0; i<n; i++){
        printf("[%d]", gt[i]);
    }
    for(i=0;i<n;i++){
        free(mat[i]);
    }
    free(mat);
return 0; 
}
