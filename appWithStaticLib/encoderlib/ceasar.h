#ifndef CEASAR_H_INCLUDED
#define CEASAR_H_INCLUDED
#include<string.h>
void ceasarEncoderMutable(char* inputString, int key);
void ceasarDecoderMutable(char* inputString, int key);
char* ceasarEncoderImmutable(char* inputString, int key);
char* ceasarDecoderImmutable(char* inputString, int key);



#endif // CEASAR_H_INCLUDED
