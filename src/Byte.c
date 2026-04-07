#include"Byte.h"

char Byte_acessar(Byte *b, int bit){
    if(0 <= bit && bit < BYTESIZE){
        return (*b) & 1 << (BYTESIZE-1-bit);
    }
    return -1;
}

void Byte_ligar(Byte *b, int bit){
    if(0 <= bit && bit < BYTESIZE){
        (*b) |= 1 << (BYTESIZE-1-bit);
    }
}

void Byte_desligar(Byte *b, int bit){
    if(0 <= bit && bit < BYTESIZE){
        (*b) &= ~(1 << (BYTESIZE-1-bit));
    }
    
}
