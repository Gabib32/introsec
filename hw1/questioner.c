// Guessing game c program - Gabi Beyer

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

int numGuessed = -2;
int numActual = -2;
char userName[20];
int nameLen = strlen(userName);

FILE* textFile;
char* line = NULL;
size_t len = 0;

// get user input
printf("What is your name?\n");
scanf("%20s", &userName);

printf("What is the magic number, %s\n", userName);
scanf("%d", &numGuessed);

// open text file for reading answers
textFile = fopen("answers.txt", "r");

// read through file and find a name matching the user
while ((getline(&line, &len, textFile)) != -1) {
	if (strncmp(userName, line, nameLen) == 0) {
		numActual = 
		printf("match: %s", line);
	}
}


return 0;
}
