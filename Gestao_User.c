/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "API_Menus.h"
#include "API_Leitura.h"
#include "Gestao_User.h"

#define BUFFER 150



void gestaoUser(Identificador **head){
    menuMostrarOpcoesUser();
    chooseUserSettings(&head);
}

void chooseUserSettings(Identificador **head){
     int ansNum;
    readInt(&ansNum, 1, 5, "Introduza uma opção entre 1 e 5: \n");
    switch(ansNum){
        case 1: addUser(head); break;
        case 2: editUser(head);break;
        case 3: deleteUser(head);break;
        //case 4: listUsers();break;
        case 5: searchUser(head);
        case 6: exit(0);
    }
}

void addUser(Identificador **head){
    //reduzir allocaçao dupla redundante
    Identificador *newId =(Identificador *)malloc(sizeof(Identificador));
    if ((*newId) == NULL) {
        printf("Erro de alocaçao.\n");
    } else {
        if ((*head)==NULL) {
            head = newId;
            (*head)->Next = NULL;
        } else {
            (*newId)->Next = head;
            head = newId;
            (*head)->id = rand();
            }
    }
}

void editUser(Identificador **head, int id, char opcao[]){
     while((*head)->id != id){
        (*head) = (*head)->Next;
        if(head->Next == NULL ){
            printf("Cliente nao encontrado.\n");
        }
}

// TODO: precaver situaçao de lista nula e de lista com uma elemento e tratar da informacao do nó
void deleteUser(Identificador **head, int id){
    Identificador *Previous = NULL;
    while(head->id!= id){
        Previous = head;
        head = head->Next;
        Previous->Next = head;
        }
    Previous->Next = head->Next;
    head = head->Next;
    free(head);
    if((*head) == NULL){
        return true;
    }
}

Identificador* searchUser(Identificador **head, int id){
      while(head->id!= id){
        head = head->Next;
        if(head->Next == NULL ){
            printf("Cliente nao encontrado.\n");
        }
     }return head;
}