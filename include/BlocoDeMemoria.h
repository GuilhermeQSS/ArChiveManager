#ifndef BLOCODEMEMORIA_H
#define BLOCODEMEMORIA_H

#include"Diretorio/Diretorio.h"
#include"iNodePrincipal.h"
#include"iNodeSecundario.h"

typedef struct{
    Diretorio dir;
    iNodePrincipal inodePrincipal;
    iNodeSecundario inodeSecundario;
}BlocoDeMemoria;

#endif