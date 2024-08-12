#include <stdio.h>
#include <stdlib.h>
int main(){

	int a;
	printf("Enter a : ");
	scanf("%d",&a);

	int n = a;
	int num = a;

	if(a % 2 == 0)
		printf("Divisible by 2 \n");
	else
		printf("Not Divisible by 2 \n");


	if((n & 1) == 0)
		printf("Even Number \n");
	else
		printf("Odd Number \n");

	printf("%d \n",8^8);
	//int x;int y = x;
	int x,y = x;

	char stars = '*';
	printf("%c \n",stars);


	if(num > 9 && num < 100)
		printf("True \n");
	else
		printf("False \n");

	return 0;
}
