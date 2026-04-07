#ifndef BLOCODEMEMORIA_H
#define BLOCODEMEMORIA_H

#include"Diretorio/Diretorio.h"
#include"iNodePrincipal.h"
#include"iNodeSecundario.h"
#include"Byte.h"

typedef struct{
    Diretorio dir;
    iNodePrincipal inodePrincipal;
    iNodeSecundario inodeSecundario;
    char blocoDeDado;
    Byte byte;
    char link[256];
}BlocoDeMemoria;

#endif