#include <stdio.h>

void swap(int x,int y) {
	int temp = y;
	y = x;
	x = temp;
	printf("func(swap) => A : %d B : %d \n", x,y);
}

void _swap(int* x, int* y) {
	int temp = *y;
	*y = *x;
	*x = temp;
	printf("funct(_swap) => A : %d B : %d \n", *x,*y);
}

int main() {

	int a = 20;
	int b = 50;
	printf("Original values: \n");
	printf("A : %d B : %d \n", a,b);
	printf("Call by value: \n");
	swap(a,b);
	printf("A : %d B : %d \n", a,b);
	printf("Call by ref: \n");
	_swap(&a,&b);
	printf("A : %d B : %d \n", a,b);
	return 0;
}
