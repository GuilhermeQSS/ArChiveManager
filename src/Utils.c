#include"Utils.h"
#include<stdio.h>

void entradaNomeUsuario(char *nomeUsuario){
    printf("Insira o nome do usuario:");
    Entrada_string(nomeUsuario,USERNAMESIZE);
    while (strcmp(nomeUsuario,"") == 0){
        printf("Nome vazio");
        Entrada_string(nomeUsuario,USERNAMESIZE);
    }
}

int entradaTamanhoDisco(){
    int tamanhoDisco;
    printf("Insira o tamanho da memoria em bytes(%d-%d)",MINDISKSIZE,MAXDISKSIZE);
    tamanhoDisco = Entrada_intReturn();
    if(tamanhoDisco < MINDISKSIZE || tamanhoDisco > MAXDISKSIZE){
        printf("Tamanho invalido(%d-%d)",MINDISKSIZE,MAXDISKSIZE);
        tamanhoDisco = Entrada_intReturn();
    }
    return tamanhoDisco;
}