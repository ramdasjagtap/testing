#include <stdio.h>

int main() {
	FILE *fptr;

	fptr = fopen("data.txt","w");

/*
	if(fptr == NULL) {
		printf("File does not exist \n");
	} else {
		fprintf(fptr, "%c", 'M');
		fprintf(fptr, "%c", 'A');
		fprintf(fptr, "%c", 'N');
		fprintf(fptr, "%c", 'G');
		fprintf(fptr, "%c", 'O');
		fprintf(fptr, "%c", ' ');
		fclose(fptr);
	}	
*/
	fputc('A',fptr);
	printf("%c\n",fgetc(fptr));


	return 0;
}
