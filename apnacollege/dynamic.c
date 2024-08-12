#include <stdio.h>
#include <stdlib.h>

int main() {

	//malloc()
	int *ptr = (int*) malloc(5 * sizeof(int));
	ptr[0] = 12;
	ptr[1] = 13;
	ptr[2] = 14;
	ptr[3] = 15;
	ptr[4] = 16;

	printf("malloc() => ");
	for(int i = 0; i < 5; i++){
		printf("%d ",ptr[i]);
	}

	printf("\n");

	//free()
	free(ptr);

	//calloc()
	ptr = (int*) calloc(5, sizeof(int));
	printf("calloc() => ");
	for(int i = 0; i < 5; i++){
		printf("%d ",ptr[i]);
	}
	

	//free()
	free(ptr);

	printf("\n");


	//realloc()
	ptr = (int*) calloc(5,sizeof(int));
	ptr = realloc(ptr,8);
	printf("realloc() => ");
	for(int i = 0; i < 8; i++){
		printf("%d ",ptr[i]);
	}

	free(ptr);

	printf("\n");

	return 0;
}
