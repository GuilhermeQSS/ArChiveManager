#ifndef DIRETORIO_H
#define DIRETORIO_H

#include"DiretorioEntrada.h"

typedef struct{
    DiretorioEntrada entradas[10];
    int tl;
    int prox;
}Diretorio;

Diretorio Diretorio_init(int iNode,int iNodePai);

#endif