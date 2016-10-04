// Guessing game c program - Gabi Beyer

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

	int numGuessed = -2;
	int numActual = 12345;
	char nameInput[20];
	char nameFile[20];
	int nameLen = 0;
	
	FILE* textFile;
	
	// get user input
	printf("What is your name?\n");
	scanf("%20s", nameInput);
	
	printf("What is the magic number, %s\n", nameInput);
	scanf("%d", &numGuessed);
	if (numGuessed == -2) {
		printf("error getting magic number\n");
		exit(-1);
	}
	
	// open text file for reading answers
	textFile = fopen("answers.txt", "r");
	if (!textFile) {
		printf("Unable to open textfile answers.txt\n");
		exit(-2);
	}
	
	// read through file and find a name matching the user
	while(fscanf(textFile, "%s %d", nameFile, &numActual) != EOF) {
		nameLen = strlen(nameInput);
		if (strncmp(nameInput, nameFile, nameLen) == 0) {
			break;
		}
	}
	
	// Compare numbers
	if (numGuessed > numActual) {
		printf("TOO HIGH\n");
	} else if (numGuessed < numActual) {
		printf("TOO LOW\n");
	} else {
		printf("CORRECT\n");
	}

	return 0;
}
