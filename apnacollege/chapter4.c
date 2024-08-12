#include <stdio.h>

int main() {

	int num;
	printf("Enter num: ");
	scanf("%d",&num);

	for(size_t i = 1; i <= 10; i++) 
	{
		printf("%ld \n", num * i);
	}

	return 0;
}
