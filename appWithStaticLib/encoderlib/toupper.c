#include"toupper.h"
#include <stdlib.h>
void toUpperMutable(char* inputString) {
    for (int i = 0; inputString[i]; ++i)
    {
        int code = (int)inputString[i];
        if ((97 <= code) && (code <= 122))
            inputString[i] = (char)(code - 32);
    }
}

char* toUpperImmutable(char* inputString) {
    int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(inputString));
    for (int i = 0; inputString[i]; ++i)
    {
        if ((97 <= inputString[i]) && (inputString[i] <= 122))
        {
            buffer[i] = (char)(inputString[i] - 32);
        }
    }
    buffer[strLen] = 0;
    return buffer;
}