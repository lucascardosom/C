//remove_circular_list.c
//creating function to remove elements of a circular list

#include <stdio.h>
#include <stdlib.h>

struct NO {
    int info;
    struct NO *prox;
};
typedef struct NO lista;

lista *remove_lista(lista *L, int el){
    if(L == NULL){
        printf("lista vazia\n");
        return NULL;
    }

    lista *aux = L;
    lista *ant = NULL;

    if(L->prox == L){
        if(L->info == el){
            free(L);
            return NULL;
        } else {
            printf("elemento nao encontrado\n");
            return L;
        }
    }

    do {
        if(aux->info == el){
            break;
        }
        ant = aux;
        aux = aux->prox;
    } while(aux != L);
  

    if(aux->info != el){
        printf("elemento nao encontrado\n");
        return L;
    }
  
    if(aux == L){
        lista *ultimo = L;

        while(ultimo->prox != L){
            ultimo = ultimo->prox;
        }

        L = L->prox;
        ultimo->prox = L;

        free(aux);
        return L;
    }

    ant->prox = aux->prox;
    free(aux);

    return L;
}
