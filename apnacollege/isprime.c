#include <stdio.h>
#include <stdbool.h>

int main() {

	int num;
	bool flag = true;

	printf("Enter num : ");
	scanf("%d",&num);

	if(num <= 1) {
		flag = false;
	} else {
		for(int i = 2; i < num ;i++)
		{
			if(num % i == 0) 
			{
				flag = false;
				break;
			}
		}
	}

	if(flag)
		printf("Prime Number \n");
	else
		printf("Not a prime number \n");

	return 0;
}
