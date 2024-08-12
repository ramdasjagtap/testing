#include <stdio.h>

void reverse(int array[],int size) {
		for(int i = 0; i < size/2; i++) {
//		int firstval = array[i];
//		int secondval = array[size-i-1];
//		array[i] = secondval;
//		array[size-i-1] = firstval;
		
		int temp = array[i];
		array[i] = array[size-i-1];
		array[size-i-1] = temp;
	}

	for(int i = 0; i < size; i++) {
		printf("%d ",array[i]);
	}
	printf("\n");

}


void storeTable(int array[][10],int n,int m,int number) {
	
	for(int i = 0; i < m; i++)
	{
		array[n][i] = number * (i+1);
	}

}

int main() {

	int array[] = {1,2,3,4,5,6,7,8,9,10};

	int size = sizeof(array) / sizeof(array[0]);

	printf("Original Array: \n");
	for(int i = 0; i < size; i++) {
		printf("%d ",array[i]);
	}

	printf("\nReversed Array: \n");
	reverse(array,size);


	int n;
	printf("Enter n: ");
	scanf("%d",&n);

	int fib[n];

	fib[0] = 0;
	fib[1] = 1;
	printf("%d ",fib[0]);
	printf("%d ",fib[1]);

	for(int i = 2; i < n; i++) {
		fib[i] = fib[i-1] + fib[i-2];
		printf("%d ",fib[i]);
	}

	printf("\n");

	int table[2][10];
	storeTable(table,0,10,2);
	storeTable(table,1,10,3);

	for(int i = 0; i <10 ;i++){
		printf("%d ",table[0][i]);
	}

	printf("\n");
	
	for(int i = 0; i <10 ;i++){
		printf("%d ",table[1][i]);
	}

	printf("\n");

	return 0;
}
