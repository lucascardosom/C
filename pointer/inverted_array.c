//inverted_array.c
//inverting array using pointer acessing the value of the memory adress and implementing in the original array

void inverted(int n, int *v){
    int temp, k;
    int *begin = v;
    int *end = v + n-1;
    while(begin<end){
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

int main(){
    int n, i;
    printf("type the size of the array:");
    scanf("%d", &n);
    int v[n];
    for (i=0;i<n;i++){
        printf("type the element %d of the array:", i+1);
        scanf("%d", &v[i]);
    }
    inverted(n, v);
    printf("your inverted array is:");
    for (i=0;i<n;i++){
        printf("[%d]", v[i]);
    }
return 0;
}
