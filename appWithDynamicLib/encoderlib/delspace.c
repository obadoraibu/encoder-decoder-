#include "delspace.h"
#include <stdlib.h>
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
	size_t i = 0, j = 0;
	size_t len = strlen(inputString);
	char* buffer = (char*)calloc(len + 1, sizeof(inputString));
	while (inputString[i] != '\0') 
	{
		if (inputString[i] == ' ')
		{
			i++;
		}
		else 
		{
			buffer[j] = inputString[i];
			j++;
			i++;
		}
	}
	buffer[j] = '\0';
	return buffer;
}
