#include <stdio.h>
#include <math.h>
//Q.1) function to print maximum of 3 numbers.
void max_of_three(int *a,int *b,int *c){
	if((*a > *b) && (*a > *c)) {
		printf("Max: %d \n",*a);
	} else if((*a < *b) && (*b > *c)){
		printf("Max: %d \n",*b);
	} else if((*c > *b) && (*a < *c)) {
		printf("Max: %d \n",*c);
	}
}

// Q.2) Function to check number is prime or not.
int isPrime(int *a){
	int ans = 0;
	for(int i = 2; i < *a/2; i++) {
		if(*a%i == 0){
			return 0;
		}
	}
	return 1;
}

// Q.3) Calculate compound interest
double compInterest(int *P,int *R,int *t) {
	double a = (double)*P;
	double b = (double)*R;
	double c = (double)*t;
	double ans = 0;
	ans = a*pow((1 + b/100),c);
	return (ans - a);
}

// Q.4) Swap 2 varible without extra varible.
void swap(int *a,int *b) {
	int x = *a;
	int y = *b;
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("A : %d , B: %d",x,y);
}

// Q.5) Replace 0s with 1s
void Replace0s(int *num){
	int a = *num;
	int i = 0;
	int ans = 0;
	while(a != 0) {
		if(a % 10 == 0) {
			ans += 1*pow(10,i);
		} else {
			ans += (a%10)*pow(10,i);
		}
		i++;
		a /= 10;
	}
	printf("NUM: %d, New NUM: %d\n",*num,ans);
}

//Q.6) Binary to decimal
void BinToDec(int *num){
	int bin = *num;
	int rem = 0;
	int dec = 0;
	int i = 0;
	while(bin != 0){
		rem = bin % 10;
		dec += rem * pow(2,i);
		i++;
		bin /= 10;
	}
	printf("BIN: %d , DEC: %d\n",*num,dec);
}

// Q.7) check leap year
void leap_year(int *year){
	int yr = *year;
	if(yr % 4 == 0){
		printf("Leap Year \n");
	} else {
		printf("Not a Leap year \n");
	}
}

// Q.8) Factorial of num.
int factorial(int num){
	if(num < 2){
		return num;
	} else {
		return factorial(num-1) * (num);
	}	
}

// Q.9) Armstrong Number.
int isArmstrong(int num){
	int temp = num;
	int n = num;
	int rem = 0;
	int ans = 0;
	int i = 0;
	while(n != 0){
		i++;
		n = n / 10;	
	}
	while(num != 0) {
		rem = num % 10;
		ans += pow(rem,i);
		num /= 10;
	}
	if(temp == ans){
		return 1;
	} else {
		return 0;
	}
}
int main(int argc, char *argv[]){
	int a;
	printf("Enter a \n");
	scanf("%d",&a);
	printf("isArmstrong? : %d \n",isArmstrong(a));
	return 0;
}
