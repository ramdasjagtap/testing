#include <stdio.h>
#include <stdlib.h>

int main() {

	int num;
	printf("Enter num: ");
	scanf("%d",&num);

	int n = num;

	int a = num % 10;
	num = num / 10;
	
	int b = num % 10;
	num = num / 10;
	
	int c = num % 10;
	num = num / 10;

	int res = (a*a*a) + (b*b*b) + (c*c*c);

	if(n == res) {
		printf("Armstrong number \n");
	} else {
		printf("Not a Armstrong number \n");
	}
	
	return 0;

}
