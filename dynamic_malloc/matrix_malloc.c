//matrix_malloc.c
//implementing matrix using malloc 


#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, m, i=0, j=0;
    printf("enter the n and m:");
    scanf("%d %d", &n, &m);
    int **mat = (int**) malloc ( 1 * sizeof(int*));
    if (mat==NULL){
        printf("memory allocation failed!");
        return 1;
    }
    for (i=0;i<n;i++){
        mat[i] = (int*) malloc (m * sizeof(int));
        if (mat[i]==NULL){
            printf("memory allocation failed!");
            return 1;
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("enter the element mat[%d][%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("[%d]", mat[i][j]);
        }
        printf("\n");
        
    }
    for(i=0;i<n;i++){
        free(mat[i]);
    }
    free(mat);
return 0;
}
