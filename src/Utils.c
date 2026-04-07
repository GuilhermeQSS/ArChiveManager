#include<stdio.h>
#include<string.h>
#include"Utils.h"
#include"Entrada.h"

void entradaNomeUsuario(char nomeUsuario[]){
    printf("Insira o nome do usuario:");
    Entrada_string(nomeUsuario,USERNAMESIZE);
    while (strcmp(nomeUsuario,"") == 0){
        printf("Nome vazio\n");
        Entrada_string(nomeUsuario,USERNAMESIZE);
    }
}

int entradaTamanhoDisco(){
    int tamanhoDisco;
    printf("Insira o tamanho da memoria em bytes(%d-%d)",MINDISKSIZE,MAXDISKSIZE);
    tamanhoDisco = Entrada_intReturn();
    if(tamanhoDisco < MINDISKSIZE || tamanhoDisco > MAXDISKSIZE){
        printf("Tamanho invalido(%d-%d)\n",MINDISKSIZE,MAXDISKSIZE);
        tamanhoDisco = Entrada_intReturn();
    }
    return tamanhoDisco;
}

int initBitMap(BlocoDeMemoria memoria[], int tamanhoDisco){
    int tamanhoBitMap = tamanhoDisco/(BYTESIZE+1);
    int restoBits = tamanhoDisco%(BYTESIZE+1);
    size_t i;
    for(i = 0; i < tamanhoBitMap; i++){
        memoria[i].byte = 0;
    }
    if(restoBits > 0){
        tamanhoBitMap++;
        memoria[tamanhoBitMap-1].byte = 0;
        for (i = 0; i < BYTESIZE-restoBits+1; i++){
            Byte_ligar(&(memoria[tamanhoBitMap-1].byte),BYTESIZE-1-i);
        }
    }
    return tamanhoBitMap;
}

int getBlocoLivre(BlocoDeMemoria memoria[], int tamanhoBitMap){
    for (size_t i = 0; i < tamanhoBitMap; i++){
        for (size_t j = 0; j < BYTESIZE; j++){
            if(!Byte_acessar(&(memoria[i].byte),j)){
                Byte_ligar(&(memoria[i].byte),j);
                return tamanhoBitMap+(i*BYTESIZE)+j;
            }
        }
    }
    return -1;
}
