#include <stdio.h>

void printNumbers(int arr[], int n) {
	for(int i = 0 ;i < n; i++)
	{
		printf("%d index : %d \n",i,arr[i]);
	}
}

void _printNumbers(int *arr, int n) {
	for(int i = 0 ;i < n; i++)
	{
		printf("%d index : %d \n",i,arr[i]);
	}
}

int main() {
	
	int array[] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07};

	int size = sizeof(array)/sizeof(array[0]);
	
	printf("Passing array to function \n");
	printNumbers(array,size);
	
	printf("Passing array pointer to function \n");
	_printNumbers(array,size);
	

	return 0;
}
