#include <stdio.h>

int main() {
	
	int marks[] = {10,20,30,40,50};
	int aadhar[5];
	int *p = &aadhar[0];

	for(int i = 0; i < 5 ;i++) {
		printf("%d index : ",i);
		scanf("%d",(p+i));
//		printf("Marks[%d] : %d \n",i,marks[i]);
	}
	
	for(int i = 0; i < 5; i++) {
		int *ptr = &marks[i];
		printf("%d index : %d \n",i,aadhar[i]);
//		printf("ptr: %p \n",ptr++);
	}


	return 0;
}
