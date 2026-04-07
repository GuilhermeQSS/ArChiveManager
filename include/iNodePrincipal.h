#ifndef INODEPRINCIPAL_H
#define INODEPRINCIPAL_H

typedef struct{
    char modo[11];

    int count;

    char dono[33];
    char grupo[33];

    int tamanho;

    char mes[4];
    int dia;
    char horaMin[5];

    int ponteirosDiretos[12];
    int ponteiroIndireto1;
    int ponteiroIndireto2;
    int ponteiroIndireto3;
}iNodePrincipal;

#endif