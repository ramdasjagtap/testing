#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int a;
	printf("Enter A: ");
	scanf("%d",&a);

	int marks = a;
	if(marks > 90)
		printf("Grade: A+ \n");
	else if(marks > 80 && marks  <= 90)
		printf("Grade: A \n");
	else if(marks > 70 && marks <= 80) 
		printf("Grade: B+ \n");
	else if(marks > 60 && marks <= 70)
		printf("Grade: B \n");
	else
		printf("Grade: C \n");


	printf("Ternary operator \n");
	int num = 10;
	(num > 10) ? printf("Your are adult \n") : printf("Your teenager \n");



	printf("switch \n");
	char oper;
	printf("Enter oper: ");
	scanf(" %c", &oper);

	switch(oper) {
		case '+' : printf("+ \n");
				break;
		case '-' : printf("- \n");
				break;
		case '*' : printf("* \n ");
				break;
		default : printf("Not a operator \n");
				break;
	}

	return 0;
}
