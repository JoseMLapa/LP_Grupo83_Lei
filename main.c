/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: zegla
 *
 * Created on December 6, 2018, 10:39 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "API_Menus.h"
#include "Gestao_User.h"

/* Erros
 * Code1 - erro na alocaçao
 * Code2 - 
 * Code3 - erro de atribuiçao
 * Code4 -
 *  */

int main() {
    srand(time(NULL));
    Identificador *head = NULL;
    menuMostrarMainMenu();
    chooseLogin();
    menuMostrarOpcoes();
    gestaoUser(&head);
    
 
    
    return (EXIT_SUCCESS);
}

