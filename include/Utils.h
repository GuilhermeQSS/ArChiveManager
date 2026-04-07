#ifndef UTILS_H
#define UTILS_H

#include"BlocoDeMemoria.h"

#define USERNAMESIZE 33
#define MINDISKSIZE 0
#define MAXDISKSIZE 666
#define TERMINALINPUTSIZE 4096

void entradaNomeUsuario(char nomeUsuario[]);
int entradaTamanhoDisco();

//calcula o tanto de blocos para usar o bitmap
int initBitMap(BlocoDeMemoria memoria[], int tamanhoDisco);

//retorna o indice na memoria de um bloco que está livre, retorna -1 quando não há blocos livres
int getBlocoLivre(BlocoDeMemoria memoria[], int tamanhoBitMap);

#endif
