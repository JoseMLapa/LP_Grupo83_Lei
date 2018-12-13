#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "API_Menus.h"
#include "API_Leitura.h"



#define BUFFER 150

bool getBoolAns() {
    char ans[1];
    char y = 'y';
    readChar(ans, "Type y (yes) or n (no): ");
    if (ans == y) return true;
    else return false;
}

void chooseLogin(){
    int ansNum;
    readInt(&ansNum, 1, 3, "Introduza uma opção entre 1 e 3: \n");
    switch(ansNum){
        case 1: login(); break;
        case 2: signIn(); break;
        case 3: exit(0);
    }
}

void chooseManagement(){
    int ansNum;
    readInt(&ansNum, 1, 5, "Introduza uma opção entre 1 e 5: \n");
    switch(ansNum){
        case 1: gestaoUser(); break;
        case 2: signIn(); break;
        case 3: 
        case 4:
        case 5: exit(0);
    }
}

void login(){
    gestaoUser();
}

void signIn(){
    gestaoUser();
}
