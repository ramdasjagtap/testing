#include <stdio.h>
#include <math.h>

int main() {
	int array[] = {4,2,4,82}; 

	int sum = 0;
	int product = 1;

	int size = sizeof(array)/sizeof(array[0]);

	for(int i = 0; i < size; i++)
	{
		sum += array[i];
		product *= array[i];
	}

	float a_mean = (float)sum/(float)size;
	float n = 1.0/(float)size;
	float g_mean = pow(product,n);
	
	printf("A mean: %f \n",a_mean);
	printf("G mean: %f \n",g_mean);

	return 0;
}
