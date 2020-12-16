#include"tolower.h"
#include <stdlib.h>
void toLowerMutable(char* inputString) {
    for (int i = 0; inputString[i]; ++i)
    {
        int code = (int)inputString[i];
        if ((65 <= code) && (code <= 90))
            inputString[i] = (char)(code + 32);
    }
}

char* toLowerImmutable(char* inputString) {
    int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(inputString));
    for (int i = 0; inputString[i]; ++i)
    {
        int code = (int)inputString[i];
        if ((65 <= code) && (code <= 90))
            buffer[i] = (char)(code + 32);
    }
    return buffer;
}