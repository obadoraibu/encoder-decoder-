#include"xor.h"

void xorMutable(char* inputString, char* key)
{
    size_t keyLength = strlen(key);
    for (int i = 0; inputString[i]; ++i)
    {
        inputString[i] = inputString[i] ^ key[i % keyLength];
    }
}

char* xorImmutable(char* inputString, char* key, char* buffer)
{
    size_t keyLength = strlen(key);
    for (int i = 0; inputString[i]; ++i)
    {
        buffer[i] = inputString[i] ^ key[i % keyLength];
    }
    return buffer;
}
