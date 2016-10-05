// Guessing game c program - Gabi Beyer

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define NAME		"Bob"
#define QUESTION_FORMAT	"What is the magic number, "
#define QUESTION 	QUESTION_FORMAT NAME

int main() {

	int number = 123;
	char nameMsg[] = "What is your name?";
	int nameMsgSize = strlen(nameMsg);
	int numMsgSize = strlen(QUESTION);
	char nameMsgInput[nameMsgSize];
	char numMsgInput[numMsgSize];
	int nameResult = -1;
	int numResult = -1;

	// chars that are not new lines, so scanf reads sentence as input
	// instead of stopping at whitespace. 
	scanf("%[^\n]%*c", nameMsgInput);

	nameResult = strncmp(nameMsgInput, nameMsg, nameMsgSize);
	if (nameResult == 0) {
		printf("%s\n", NAME);
	} else {
		printf("???\n");
		exit(-1);
	}

	scanf("%[^\n]%*c", numMsgInput);

	numResult = strncmp(numMsgInput, QUESTION, numMsgSize);
	if (numResult == 0) {
		printf("%d\n", number);
	} else {
		printf("???\n");
		exit(-2);
	}
		
	return 0;
}
