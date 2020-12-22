#ifndef CRYPT_H_INCLUDED
#define CRYPT_H_INCLUDED
#include<string.h> 
#include<stdlib.h>
void xorMutable(char* inputString, char* key);
char* xorImmutable(char* inputString, char* key);

void ceasarEncoderMutable(char* inputString, int key);
void ceasarDecoderMutable(char* inputString, int key);
char* ceasarEncoderImmutable(char* inputString, int key);
char* ceasarDecoderImmutable(char* inputString, int key);
#endif // CRYPT_H_INCLUDED
