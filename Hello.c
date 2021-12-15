#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum {
	true,
	false
} BOOLEAN;

void println(char* text);
BOOLEAN intToBoolean(int i);
char* booleanToString(BOOLEAN b);

int main(void) {
	printf("Hello World!\n");
	char fileAuthor[] = "minemobs";
	println(fileAuthor);
	println("What's your name ? (Length limit = 20)");
	char name[20];
	scanf("%20s", name);
	printf("Your name is %s\n", name);
	println(booleanToString(intToBoolean(1)));
	return 0;
}

void println(char* text) {
	printf("%s\n", text);
}

BOOLEAN intToBoolean(int i) {
	return i == 1 ? true : false;
}

char* booleanToString(BOOLEAN b) {
	switch(b) {
		case true: return "true";
		default: return "false";
	}
}
