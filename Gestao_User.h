/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestao_User.h
 * Author: zegla
 *
 * Created on December 7, 2018, 10:31 AM
 */

#ifndef GESTAO_USER_H
#define GESTAO_USER_H

#ifdef __cplusplus
extern "C" {
#endif
#include "estruturas.h"
#include <stdbool.h>
    

void gestaoUser();

void chooseUserSettings();

void addUser(Identificador **head);

void editUser(Identificador **head, int id, char opcao[]);

void deleteUser(Identificador **head, int id);

Identificador* searchUser(Identificador **head, int id);
        
#ifdef __cplusplus
}
#endif

#endif /* GESTAO_USER_H */

