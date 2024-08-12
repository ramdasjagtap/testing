#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("Relational operator \n");
	printf("!= %d \n",4 != 4);
	printf("== %d \n",4 == 4);

	printf("Loigcal operator \n");
	printf(" && %d \n", (4 > 3) &&  (5 > 2) );
	printf(" || %d \n", (4 > 3) || (5 > 2) );
	printf(" ! %d \n", !4);
	printf(" | %d \n", 2 & 3);

	printf("Assignment Operator \n");
	int a = 2;
	int b = 4;
	b *= a;
	printf("%d \n", b);


	return 0;
}
