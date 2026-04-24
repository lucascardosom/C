//side_by_side.c
//receive two arrays and print the n-element of both of them and tell how many numbers are being printed

#include <stdio.h>

int main(){
    int n, m, i, j, counter;
    printf("type the size of array A (greater than zero):");
    scanf("%d", &n);
    printf("type the size of array B (greater than zero):");
    scanf("%d", &m);
    int arraya[n], arrayb[m];
    
    for (i=0;i<n;i++){
        printf("type the value of the element of array A:");
        scanf("%d", &arraya[i]);
    }
    for (j=0;j<m;j++){
        printf("type the value of the element of array B:");
        scanf("%d", &arrayb[j]);
    }
    if(n==m){                                                                  //maybe i can make a double for to optimize the program
        for (counter=0; counter<n; counter++){
            printf("A: %d , B: %d \n", arraya[counter], arrayb[counter] );
            printf("2 numbers\n");
        }
    }
    if(n<m){
        for (counter=0; counter<n; counter++){
            printf("A: %d , B: %d \n", arraya[counter], arrayb[counter] );
            printf("2 numbers\n");
        }
        for (counter=n; counter<m; counter++){
            printf("B: %d \n", arrayb[counter]);
            printf("1 number\n");
        }
    }
    if(n>m){
        for (counter=0; counter<m; counter++){
            printf("A: %d , B: %d \n", arraya[counter], arrayb[counter] );
            printf("2 numbers\n");
        }
        for (counter=m; counter<n; counter++){
            printf("A: %d\n", arraya[counter]);
            printf("1 number\n");
        }
    }
return 0;
}
