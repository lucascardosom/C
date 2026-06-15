//counting_list.c
//implementing the counting function of linked list

#include <stdio.h>
#include <stdlib.h>

struct no{
    int number;
    char name[50];
    struct no *next;
};
typedef struct no player;

int addplayer(player **head){
    player *aux;
    player *newe = malloc(sizeof(player));
    if(newe == NULL){
        printf("memory error!");
        return 1;
    }
    printf("type the player´s number:");
    scanf("%d", &newe->number);
    printf("type the player´s name:");
    scanf(" %[^\n]", newe->name);
    newe->next = NULL;
    if(*head == NULL){
        *head = newe;
    }
    else{
        aux = *head;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = newe;
    }
return 0;
}

void printplayer(player *head){
    while(head != NULL){
        printf("---------------\nName:%s\nNumber:%d\n", head->name, head->number);
        head = head->next;
    }
}


int removeplayer(player **head, int n){
    player *aux;
    player *prev;
    prev = NULL;
    aux = *head;
    while(aux != NULL && aux->number != n){
        prev = aux;
        aux = aux->next;
    }
    if (aux == NULL){
        printf("not found!");
        return 1;
    }
    if (prev == NULL){
        *head = aux->next;
    }
    else{
        prev->next = aux->next;
    }
    free(aux);
return 0;
}

int countplayer(player *head){
    player *aux;
    int nplay=0;
    aux = head;
    if(aux == NULL){
        return nplay;
    }
    else{
        while(aux != NULL){
            nplay += 1;
            aux = aux->next;
        }
    }
    return nplay;
}


int main(){
    player *head, *found;
    int i, n, amount, count;
    head = NULL;
    printf("type the amount of players:");
    scanf("%d", &amount);
    for(i=0;i<amount;i++){
        addplayer(&head);
    }
    printf("which number you want to remove?");
    scanf("%d", &n);
    removeplayer(&head, n);
    count = countplayer(head);
    printf("----- COUNT: %d -----", count);
    printplayer(head);
return 0;
}
