#include "ceasar.h"
#include<stdlib.h>
void ceasarEncoderMutable(char* inputString, int key) {
    for (int i = 0; inputString[i]; ++i)
    {
        int code = (int)inputString[i];
        if ((97 <= code) && (code <= 122))
        {
            code = code + (key % 26);
            if (code > 122)
                code = code - 26;
            inputString[i] = (char)code;
        }
    }
}
char* ceasarEncoderImmutable(char* inputString, int key) {
    int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(inputString));
    for (int i = 0; inputString[i]; ++i)
    {
        int code = (int)inputString[i];
        if ((97 <= code) && (code <= 122))
        {
            code = code + (key % 26);
            if (code > 122)
                code = code - 26;
            buffer[i] = (char)code;
        }
    }
    return buffer;
}


void ceasarDecoderMutable(char* inputString, int key) {
    for (int i = 0; inputString[i]; ++i)
    {
        int code = (int)inputString[i];
        if ((97 <= code) && (code <= 122))
        {
            code = code - (key % 26);
            if (code < 97)
                code = code + 26;
            inputString[i] = (char)code;
        }
    }
}

char* ceasarDecoderImmutable(char* inputString, int key) {
    int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(char));
    for (int i = 0; inputString[i]; ++i)
    {
        int code = (int)inputString[i];
        if ((97 <= code) && (code <= 122))
        {
            code = code - (key % 26);
            if (code < 97)
                code = code + 26;
            buffer[i] = (char)code;
        }
    }
    buffer[strLen] = 0;
    return buffer;
}
