#ifndef INODEPRINCIPAL_H
#define INODEPRINCIPAL_H

#include"DataHora.h"

typedef struct{
    char permissoes[10];
    char usuario[33];
    char grupo[33];
    int entradas;
    DataHora dataModificacao;
    int ponteirosDiretos[12];
    int ponteiroIndireto1;
    int ponteiroIndireto2;
    int ponteiroIndireto3;
}iNodePrincipal;

#endif