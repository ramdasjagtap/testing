#include <stdio.h>
int main() {

	size_t num;
	printf("Enter num: ");
	scanf("%ld",&num);

	size_t fact = 1;

	for(size_t i = 1; i <= num ;i++)
	{
		fact = fact * i;
	}

	printf("Factorial: %ld \n",fact);
	return 0;
}
