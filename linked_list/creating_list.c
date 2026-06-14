//creating_list.c
//learning how to create a simply linked list and adding some elements to it (while World cup matches are going on)

#include <stdio.h>
#include <stdlib.h>

struct No{
    int number;
    char name[50];
    struct No *next;
};
typedef struct No Player;

void addplayer(Player **head){
    Player *aux;
    Player *newe = malloc(sizeof(Player));
    
    if(newe == NULL){
        printf("memory error!");
        return 1;
    }
    printf("player´s number:");
    scanf("%d", &newe->number);
    
    printf("player´s name:");
    scanf(" %[^\n]", newe->name);
    
    newe->next = NULL;
    
    if (*head == NULL){
        *head = newe;
    }
    else{
        aux = *head;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = newe;
        
    }
}

void printplayer(Player *head){    //copying the value of head and not changing anything in the list
    
    while(head != NULL){
        printf("Name:%s\nNumber:%d\n---------------\n", head->name, head->number);
        head = head->next;
    }
}

int main(){
    Player *head;
    int amount, i;
    head = NULL;
    
    printf("amount of players:");
    scanf("%d", &amount);
    
    for(i=0;i<amount;i++){
        addplayer(&head);   
    }
    printf("-----PLAYERS LIST-----\n");
    printplayer(head);
return 0;
}
