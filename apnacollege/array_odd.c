#include <stdio.h>

int main() {

	int array[] = {1,2,3,4,5};

	int size = sizeof(array)/sizeof(array[0]);
	
	for(int i = 0; i < size; i++) {
		if(array[i] % 2 != 0) {
			printf("odd numbers: %d \n",array[i]);
		}
	}
     
	printf("%d \n",*(array+5));

	return 0;
}
