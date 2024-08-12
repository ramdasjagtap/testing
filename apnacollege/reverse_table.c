#include <stdio.h>
int main() {

	size_t num;
	printf("Enter Num : ");
	scanf("%ld",&num);

	for(size_t i = 10 ; i >= 1; i--)
	{
		printf("%ld \n",i*num);
	}

	int sum = 0;
	for(size_t i = 5 ; i <= 50 ; i++)
	{
		sum += i;
	}
	printf("Sum: %d\n",sum);

	return 0;
}
