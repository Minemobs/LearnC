#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void println(char* text);
char* intToBoolean(int i);

int main(void) {
	printf("Hello World!\n");
	char fileAuthor[] = "minemobs";
	println(fileAuthor);
	printf("%s %s\n", "Is Admin ?", intToBoolean(-32767));
	return 0;
}

void println(char* text) {
	printf("%s\n", text);
}

char* intToBoolean(int i) {
	return i == 1 ? "true" : i != -32767 ? "false" : "Maybe";
}
