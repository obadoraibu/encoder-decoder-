#ifndef STRINGUTILITIES_H_INCLUDED
#define STRINGUTILITIES_H_INCLUDED
#include<string.h>
#include <stdlib.h>
void delExMutable(char* inputString);
char* delExImmutable(char* InputString);

void delSpaceMutable(char* inputString);
char* delSpaceImmutable(char* inputString);

int isNumber(char* a);

int isWord(char* a);

void stripMutable(char* inputString);
char* stripImmutable(char* inputString);

void toLowerMutable(char* inputString);
char* toLowerImmutable(char* inputString);

void toUpperMutable(char* inputString);
char* toUpperImmutable(char* inputString);

#endif // STRINGUTILITIES_H_INCLUDED
