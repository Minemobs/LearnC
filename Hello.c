#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void println(char* text);
char* intToBoolean(int i);

int main(void) {
	printf("Hello World!\n");
	char fileAuthor[] = "minemobs";
	println(fileAuthor);
	println("What's your name ? (Length limit = 20)");
	char name[20];
	scanf("%20s", name);
	printf("Your name is %s\n", name);
	return 0;
}

void println(char* text) {
	printf("%s\n", text);
}

char* intToBoolean(int i) {
	return i == 1 ? "true" : "false";
}
