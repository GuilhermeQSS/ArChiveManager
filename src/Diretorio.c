#include<string.h>
#include"Diretorio/Diretorio.h"

Diretorio Diretorio_init(int iNode,int iNodePai){
    Diretorio d;
    strcpy(d.entradas[0].nome,".");
    d.entradas[0].iNode = iNode;
    strcpy(d.entradas[1].nome,"..");
    d.entradas[1].iNode = iNodePai;
    d.tl = 2;
    return d;
}

// void Diretorio_criarNovoDir(Diretorio d, PilhaBlocosLivres p, char *nome){
//     int blocoLivre;
//     strcpy(d.entradas[d.tl].nome,nome);
//     blocoLivre
//     d.entradas[d.tl].iNode = PilhaBlocosLivres_getBlocoLivre();
    
// }