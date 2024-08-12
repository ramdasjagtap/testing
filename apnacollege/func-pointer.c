#include <stdio.h>

// call by value.
void square(int n) {
	n = n * n;
	printf("sqaure : %d \n",n);
}

// call  by reference
int _sqaure(int* n){
	*n = *n * (*n);
	printf("_square : %d \n", *n);
}

int main() {
	int number = 4;
	square(number);
	printf("number : %d \n",number);
	_sqaure(&number);
	printf("number : %d \n",number);


	return 0;
}
