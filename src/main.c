#include<stdio.h>
#include<string.h>
#include"BlocoDeMemoria.h"
#include"Entrada.h"
#include"Utils.h"

int main(){
    char nomeUsuario[USERNAMESIZE];
    char* entradaTerminal;
    int tamanhoDisco;
    entradaNomeUsuario(nomeUsuario);
    tamanhoDisco = entradaTamanhoDisco();
    BlocoDeMemoria memoria[tamanhoDisco];
    return 0;
}