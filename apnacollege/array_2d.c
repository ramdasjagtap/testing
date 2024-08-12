#include <stdio.h>

void print(int array[][2],int n,int m){
	for(int i = 0; i < n ; i++) {
		for(int j = 0;i < m; j++) {
			printf("[%d ,%d] index : %d \n",i,j,array[i][j]);
		}
	}
}
int main() {
	int array[5][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};

       int size = sizeof(array)/ sizeof(array[0]);
	printf("size : %d \n",size);

	print(array,5,2);

	
	return 0;
}
