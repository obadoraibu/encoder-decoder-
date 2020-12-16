#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ceasar.h"
#include "xor.h"



int main(int argc, char* argv[])
{
    int shiftStep = 0;
    char* xorKey = NULL;
    char* method = NULL;
    char* inputString = NULL;

    if (argc < 2)
    {
        method = (char*)calloc(16, sizeof(char));
        inputString = (char*)calloc(64, sizeof(char));
        xorKey = (char*)calloc(32, sizeof(char));
        printf("Method: ");

        fgets(method, 16 * sizeof(char), stdin);
        method[strlen(method) - 1] = 0;
        printf("Input string: ");

        fgets(inputString, 64 * sizeof(char), stdin);
        inputString[strlen(inputString) - 1] = 0;
        printf("Key: ");
        fgets(xorKey, 32 * sizeof(char), stdin);
        xorKey[strlen(xorKey) - 1] = 0;
    }
    else
    {
        method = argv[1];
        inputString = argv[2];
    }



    

    int useXor = 0;
    if (strcmp(method, "--ceasar") == 0)
    {
        shiftStep = atoi(argc < 2 ? xorKey : argv[3]);
    }
    else if (strcmp(method, "--xor") == 0)
    {
        useXor = 1;
        if (argc > 2)
        {
            xorKey = argv[3];
        }
        if (xorKey == NULL)
        {
            printf("XOR key must be entered");
            return 0;
        }
    }
    else
    {
        printf("Undefined method");
        return 0;
    }

    if (useXor)
    {
        xorMutable(inputString, xorKey);
    }
    else
    {
        ceasarDecoderMutable(inputString, shiftStep);
    }
    printf("Decoded string: ");
    printf("%s", inputString);



    if (argc < 2)
    {
        free(method);
        free(inputString);
        free(xorKey);
    }


    return 0;
}

