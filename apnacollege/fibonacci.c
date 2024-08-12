#include <stdio.h>

int fibo(int num) {
	if(num <= 1)
		return num;

	return fibo(num-1) + fibo(num-2);
}
int main(){
	
	int num = 20;

	for(int i = 0; i <= num; i++)
	{
		printf("%d ",fibo(i));
	}
	printf("\n");
	return 0;
}
