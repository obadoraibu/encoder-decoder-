#include "stringutilities.h"

void delExMutable(char* inputString){
	size_t i = 0, j;
	size_t length = strlen(inputString);
	while (inputString[i] != '\0'){
		int code = (int)*inputString;
		if (!(((65 <= code) && (code <= 90)) || ((48 <= code) && (code <= 57)) || ((97 <= code) && (code <= 122))
			|| (code == 32))) 
        {
			for (j = i; j < length - 1; j++) {
				inputString[j] = inputString[j + 1];
			}
			inputString[length - 1] = '\0';
			length--;
			continue;
		}
		i++;
	}
}
char* delExImmutable(char* inputString) {
	const int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(char));
    strcpy(buffer, inputString);
    delExMutable(buffer);
    return buffer;
}


void delSpaceMutable(char* inputString) {
	size_t i = 0, j;
	size_t length = strlen(inputString);

	while (inputString[i] != '\0') {
		if (inputString[i] == ' ') {
			for (j = i; j < length - 1; j++) {
				inputString[j] = inputString[j + 1];
			}
			inputString[length - 1] = '\0';
			length--;
			continue;
		}
		i++;
	}
}

char* delSpaceImmutable(char* inputString){
	const int strLen = strlen(inputString);
    	char* buffer = (char*)calloc(strLen + 1, sizeof(char));
    	strcpy(buffer, inputString);
    	delSpaceMutable(buffer);
    	return buffer;
}

int isNumber(char* inputString) {
    for (int i = 0; inputString[i]; ++i){
        int code = (int)inputString[i];
        if (!((48 <= code) && (code <= 57)))
            return 0;
    }
    return 1;
}

int isWord(char* inputString) {
    for (int i = 0; inputString[i]; ++i){
        int code = (int)inputString[i];
        if (!(((65 <= code) && (code <= 90)) || ((97 <= code) && (code <= 122))))
            return 0;
    }
    return 1;
}

void stripMutable(char* inputString){
    char* copy = inputString;
    while (*copy == ' ')
        copy++;

    int i = strlen(copy) - 1;
    while (*(copy + i) == ' '){
        *(copy + i) = '\0';
        i--;
    }
    int delta = copy - inputString;
    
    for (int i = 0; inputString[i]; ++i){
        inputString[i] = inputString[i + delta];
    }
}

char* stripImmutable(char* inputString){
    const int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(char));
    strcpy(buffer, inputString);
    stripMutable(buffer);
    return buffer;
}

void toLowerMutable(char* inputString) {
    for (int i = 0; inputString[i]; ++i){
        int code = (int)inputString[i];
        if ((65 <= code) && (code <= 90))
            inputString[i] = (char)(code + 32);
    }
}

char* toLowerImmutable(char* inputString) {
    const int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(char));
    strcpy(buffer, inputString);
    toLowerMutable(buffer);
    return buffer;
}

void toUpperMutable(char* inputString) {
    for (int i = 0; inputString[i]; ++i){
        int code = (int)inputString[i];
        if ((97 <= code) && (code <= 122))
            inputString[i] = (char)(code - 32);
    }
}

char* toUpperImmutable(char* inputString) {
    const int strLen = strlen(inputString);
    char* buffer = (char*)calloc(strLen + 1, sizeof(char));
    strcpy(buffer, inputString);
    toUpperMutable(buffer);
    return buffer;
}
