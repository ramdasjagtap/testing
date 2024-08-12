#include <stdio.h>

// call by ref
void _printAddress(int *n){
	printf("%p \n",n);
}

// call by value
void printAddress(int n){
	printf("%p \n",&n);
}

int main() {

	int age = 22;
	int *ptr = &age;
	int _age = *ptr;

	printf("*(&age): %d \n",*(&age));
	printf("*ptr: %d \n",*ptr);
	printf("ptr: %p \n",ptr);
	printf("ptr: %p \n",&ptr);
	
	int **pptr = &ptr;
	printf("**pptr : %d \n",**pptr);



	printf("Question \n");
	int n = 4;
	printf("%p \n",&n);
	_printAddress(&n);


	return 0;
}
