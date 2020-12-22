#include "crypt.h"

void ceasarEncoderMutable(char* inputString, int key) {
    for (int i = 0; inputString[i]; ++i){
        int code = (int)inputString[i];
        if ((97 <= code) && (code <= 122)){
            code = code + (key % 26);
            if (code > 122)
                code = code - 26;
            inputString[i] = (char)code;
        }
    }
}
char* ceasarEncoderImmutable(char* inputString, int key) {
    const int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(inputString));
    strcpy(buffer, inputString);
    ceasarEncoderMutable(buffer, key);
    return buffer;
}


void ceasarDecoderMutable(char* inputString, int key) {
    for (int i = 0; inputString[i]; ++i){
        int code = (int)inputString[i];
        if ((97 <= code) && (code <= 122)){
            code = code - (key % 26);
            if (code < 97)
                code = code + 26;
            inputString[i] = (char)code;
        }
    }
}

char* ceasarDecoderImmutable(char* inputString, int key) {
    const int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(char));
    strcpy(buffer, inputString);
    ceasarDecoderMutable(buffer, key);
    return buffer;
}

void xorMutable(char* inputString, char* key){
    size_t keyLength = strlen(key);
    for (int i = 0; inputString[i]; ++i){
        inputString[i] = inputString[i] ^ key[i % keyLength];
    }
}

char* xorImmutable(char* inputString, char* key){
    const int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(char));
    strcpy(buffer, inputString);
    xorMutable(inputString, key);
    return buffer;
}
