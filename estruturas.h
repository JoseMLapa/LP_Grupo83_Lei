/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   estruturas.h
 * Author: zegla
 *
 * Created on December 7, 2018, 10:32 AM
 */

#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

#ifdef __cplusplus
extern "C" {
#endif

#define TAM 150
    
typedef struct utilizador{
    char nome[TAM];
    char password[TAM];
    struct utilizador *next;
}util;
    
typedef struct carro{
    char matricula[TAM], modelo[TAM], marca[TAM];
}Carro;

typedef struct cliente{
    char nome[TAM], endereco1[TAM], cidade[TAM];
    ushort codigoPostal1, codigoPostal2;
    int NIB, NIF, CC, Pontos;
}Cliente;

typedef struct lanco{
    int origem, destino;
    float preco;
}Lanco;


typedef struct viagem{
    Lanco lancoTotais[TAM];
    float precoTotal, distancia;
    struct viagem *Next;
}Viagem;


typedef struct identificador{
    int id;
    Carro Car_atual;
    Cliente Cli_atual;
    Viagem *head;
    struct identificador *Next;
}Identificador;


#ifdef __cplusplus
}
#endif

#endif /* ESTRUTURAS_H */

