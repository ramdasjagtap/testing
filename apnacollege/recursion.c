#include <stdio.h>
#include <stdlib.h>

int sum(int num){
	if(num == 0)
		return 0;

	return num + sum(num-1);

}
int fact(int num) {
	if(num <= 1)
		return 1;
	
	return  num * fact(num-1);
}

float temp(int cel) {
	return (cel * (9.0/5.0)) + 32;
}

int calcPercentage(int math, int sci, int eng) {
	return ((math + sci + eng) / 300 ) * 100;
}
int main() {
	
	int n;
	int math = 80;
	int sci = 90;
	int eng = 98;
	printf("percentage : %d \n",calcPercentage(math,sci,eng));
	scanf("%d",&n);
	printf("sum : %d \n",sum(n));
	printf("temp : %f \n",temp(n));
	return 0;
}
