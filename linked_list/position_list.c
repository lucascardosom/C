//position_list.c
//implementing the element in the linked list by his position

#include <stdio.h>
#include <stdlib.h>

struct NO{
    int info;
    struct NO *prox;
};
typedef struct NO lista;

lista *insere_lista(lista *L, int el, int pos){
    lista *aux;
    int cont = 0;
    aux = L;
    lista *novo = (lista*) malloc (sizeof(lista));
    
    if(novo == NULL){
        return NULL;
    }
    
    novo->info = el;
    

    if(pos == 0){
        novo->prox = L;
        L = novo;
        return L;
    }
    
    while(aux != NULL && cont<pos-1){
        aux = aux->prox;
        cont++;
    }
    
    if(aux == NULL){
        printf("invalid position");
        free(novo);
        return L;
    }
    
    novo->prox = aux->prox;
    aux->prox = novo;
    
return L;
}
