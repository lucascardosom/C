//searching_list.c
//implementing a searching function using aux pointer to explore linked list

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

player *numbersearch(player *head, int n){
    player *aux;
    aux = head;
    while(aux != NULL){
        if(aux->number == n){
            return aux;
        }
        else{
            aux = aux->next;
        }
    }
return NULL;
}


int main(){
    player *head, *found;
    int i, n, amount;
    head = NULL;
    printf("type the amount of players:");
    scanf("%d", &amount);
    for(i=0;i<amount;i++){
        addplayer(&head);
    }
    printf("which number you want to search for?");
    scanf("%d", &n);
    found = numbersearch(head, n);
    if(found != NULL){
        printf("-----Player Found Successfully!-----\nName: %s\nNumber: %d\n", found->name, found->number);
    }
    else{
        printf("-----Player Not Found!-----");
    }
return 0;
}
