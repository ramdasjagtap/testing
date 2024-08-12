#include <stdio.h>
#include <string.h>

//struct  
typedef struct student { 
	char name[100];
	int roll;
	float cgpa;
} student;

void printInfo(struct student s) {
	printf("student information: \n");
	printf("student name: %s \n",s.name);
	printf("student roll: %d \n",s.roll);
	printf("student cgpa: %f \n",s.cgpa);
};

struct vector {
	int x;
	int y;
};

void calcsum(struct vector v1, struct vector v2, struct vector sum) {
	sum.x = v1.x + v2.x;
	sum.y = v1.y + v2.y;

	printf("sum vector x is : %d\n",sum.x);
	printf("sum vector y is : %d\n",sum.y);
}


struct complex{
	int real;
	int img;
};


int main() {

	struct vector v1 = {5,10};
	struct vector v2 = {3,7};
	struct vector sum = {0};
	
	calcsum(v1,v2,sum);
	printf("\n");


	struct complex number1 = {5,10};
	struct complex *ptr = &number1;

	printf("complex number: %d + %dj \n",ptr->real,ptr->img);

	// Array of struct.
/*
	student s = {"devid",50,10.00};
	student *ptr = &s;
	printf("struct pointer: %p \n",ptr);
	printInfo(s);

 *	printf("student roll(*ptr): %d \n",(*ptr).roll);
	printf("student roll(->): %d \n",ptr->roll);

	printf("student cgpa(*ptr): %f \n",(*ptr).cgpa);
	printf("student cgpa(->): %f \n",ptr->cgpa);

	printf("student name(*ptr): %s \n",(*ptr).name);
	printf("student name(->): %s \n",ptr->name);
*/


	return 0;
}
