#include "isnumber.h" 
int isNumber(char* inputString) {
    for (int i = 0; inputString[i]; ++i)
    {
        int code = (int)inputString[i];
        if (!((48 <= code) && (code <= 57)))
            return 0;
    }
    return 1;
}