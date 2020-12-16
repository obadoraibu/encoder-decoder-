#include "strip.h"
#include <stdlib.h>
void stripMutable(char* inputString)
{
    char* copy = inputString;
    while (*copy == ' ')
        copy++;
    

    int i = strlen(copy) - 1;
    while (*(copy + i) == ' ')
    {
        *(copy + i) = '\0';
        i--;
    }
    int delta = copy - inputString;
    

    for (int i = 0; inputString[i]; ++i)
    {
        inputString[i] = inputString[i + delta];
    }
}

char* stripImmutable(char* inputString)
{
    int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(inputString));
    int lastNoSpacePosition = strLen - 1;
    while (*(inputString + lastNoSpacePosition) == ' ')
    {
        *(inputString + lastNoSpacePosition) = '\0';
        lastNoSpacePosition--;
    }
    char* copy = inputString;
    while (*copy == ' ')
        copy++;

    int deltaFromBeginning = copy - inputString;
    int i = 0;
    for (; i <= (lastNoSpacePosition - deltaFromBeginning); ++i)
    {
        buffer[i] = copy[i];
    }
    buffer[i] = 0;
    return buffer;
}
