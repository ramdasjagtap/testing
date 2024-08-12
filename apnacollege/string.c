#include <stdio.h>
#include <string.h>

void printString(char str[]) {

	for(int i = 0; str[i] != '\0'; i++) {
		printf("%c",str[i]);
	}
	printf("\n");

}

int main() {

	char *str = "ramdas";

	printf("string =>");
	printString(str);


	char name[50];

	fgets(name,50,stdin);
	puts(name);


	return 0;
}
