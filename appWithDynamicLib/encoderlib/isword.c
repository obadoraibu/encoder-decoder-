#include "isword.h"
int isWord(char* inputString) {
    for (int i = 0; inputString[i]; ++i)
    {
        int code = (int)inputString[i];
        if (!(((65 <= code) && (code <= 90)) || ((97 <= code) && (code <= 122))))
            return 0;
    }
    return 1;
}