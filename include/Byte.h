#ifndef BITMAP_H
#define BITMAP_H

#define BYTESIZE 8

typedef char Byte;

char Byte_acessar(Byte *b, int bit);
void Byte_ligar(Byte *b, int bit);
void Byte_desligar(Byte *b, int bit);

#endif