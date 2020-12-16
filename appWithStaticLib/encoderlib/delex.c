#include "delexcess.h"
#include <stdlib.h>
void delExMutable(char* inputString){
	size_t i = 0, j;
	size_t length = strlen(inputString);
	while (inputString[i] != '\0'){
		int code = (int)*inputString;
		if (!(((65 <= code) && (code <= 90)) || ((48 <= code) && (code <= 57)) || ((97 <= code) && (code <= 122))
			|| (code == 32))) {
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
	size_t i = 0, j = 0;
	size_t len = strlen(inputString);
	char* buffer = (char*)calloc(len + 1, sizeof(inputString));
	while (inputString[i] != '\0') {
		int code = (int)*inputString;
		if (!(((65 <= code) && (code <= 90)) || ((48 <= code) && (code <= 57)) || ((97 <= code) && (code <= 122))
			|| (code == 32))) {
			i++;
		}
		else {
			buffer[j] = inputString[i];
			j++;
			i++;
		}
	}
	buffer[j] = '\0';
	return buffer;
}