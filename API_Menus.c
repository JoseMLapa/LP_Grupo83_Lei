#include <stdio.h>
#include <stdlib.h>
#define TAM 120
#define maxtmp 100000000

void fordelay(int n){
    int k;
    for(int i = 0; i < n; i++){
        k = i;
    }
}
void menuCriarSessaoUser(){
    
 
    printf( "  -----------------------------------------------\n"
                "  |                            Crie a sua conta                            |\n"
                "  -----------------------------------------------\n"
                "  |     Introduza o seu nome de utilizador:                |\n"
                "  -----------------------------------------------\n");
}
void menuCriarSessaoPass(){
    printf(  "  -----------------------------------------------\n"
                 "  |       Introduza a sua palavra passe:                       |\n"
                  "  -----------------------------------------------\n");
    
}
void menuMostrarMainMenu(){
    
    printf( "  -----------------------------------------------\n"
                 "  |        Bem-vindo á area  Via Verde                        |\n"
                 "  -----------------------------------------------\n");
    printf( "  -----------------------------------------------\n"
                 "  |   Selecione o Menu no qual deseja entrar.        |\n"
                 "  |    1 - Iniciar sessão                                                 |\n"
                 "  |    2 - Criar sessão                                                   |\n"
                 "  |    3 - Sair                                                                  |\n"
                 "  -----------------------------------------------\n");
            
}

void menuMostrarOpcoes(){
    
    printf( "  -----------------------------------------------\n"
                 "  |        Bem-vindo á area            |    Login    |            |\n"
                 "  -----------------------------------------------\n");
    printf( "  -----------------------------------------------\n"
                 "  |   Selecione o Menu no qual deseja entrar.        |\n"
                 "  |    1 - Gestão de Clientes                                        |\n"
                 "  |    2 - Gestão de Preços                                          |\n"
                 "  |    3 - Gestão de Viagens                                       |\n"
                 "  |    4 -  Gestão de faturas                                        |\n"
                 "  |    5 -  Sair                                                                 |\n"
                 "  -----------------------------------------------\n");
}

void menuMostrarOpcoesUser(){
    
    printf( "  -----------------------------------------------\n"
                 "  |        Bem-vindo á area         |  Utilizadores  |       |\n"
                 "  -----------------------------------------------\n");
    printf( "  -----------------------------------------------\n"
                 "  |   Selecione o Menu no qual deseja entrar.        |\n"
                 "  |    1 - Adicionar Cliente                                          |\n"
                 "  |    2 - Editar Cliente                                                 |\n"
                 "  |    3 - Remover Cliente                                           |\n"
                 "  |    4 - Listar Clientes                                               |\n"
                 "  |    5 - Procurar Cliente                                            |\n"
                 "  |    6 -  Sair                                                                 |\n"
                 "  -----------------------------------------------\n");
}
