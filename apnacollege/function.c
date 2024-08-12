#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isprime(size_t num){
	bool flag = true;
	if(num <= 1)
		flag = false;

	for(size_t i = 2; i <= num/2; i++)
	{
		if(num % i == 0)
		{
			flag = false;
			break;
		}
	}

	return flag;
}

size_t factorial(size_t num){
	size_t fact = 1;
	for(size_t i = 1 ; i <= num; i++)
	{
		fact = fact * i;
	}

	return fact;
}

int sum (int a,int b) {
	return a + b;
}

size_t square(size_t num){
	return num*num;
}

size_t squareArea(size_t side) {
	return side*side;
}
size_t circleArea(size_t rad) {
	return 3.14 * rad * rad;
}
size_t rectangleArea(size_t a ,size_t b) {
	return a * b;
}

int main() {
	
	size_t n;
	size_t a,b;
	printf("Enter N: ");
	scanf("%ld",&n);
	printf("Enter a & b: ");
	scanf("%ld %ld",&a,&b);

	printf("Square : %ld \n",square(n));
	printf("sq area : %ld \n ",squareArea(n));
	printf("rect area : %ld \n",rectangleArea(a,b));
	printf("circle area : %ld \n",circleArea(n));


	return 0;
}
