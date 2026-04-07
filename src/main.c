#include<stdio.h>

#include"Byte.h"
#include"BlocoDeMemoria.h"
#include"Entrada.h"
#include"Utils.h"

int main(){
    char nomeUsuario[USERNAMESIZE];
    char entradaTerminal[TERMINALINPUTSIZE];
    int tamanhoDisco;
    int tamanhoBitMap;

    entradaNomeUsuario(nomeUsuario);
    tamanhoDisco = entradaTamanhoDisco();
    BlocoDeMemoria memoria[MAXDISKSIZE];
    tamanhoBitMap = initBitMap(memoria,tamanhoDisco);
    
    
    return 0;
}