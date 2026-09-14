#include <stdio.h>
#include <math.h>
#include "statistics.h"
#include "output_array.h"

int main (){
	double numA[] = {1.0, 2.0, 3.0, 4.0, 5.0};
	double arrSizeA = sizeof(numA) / sizeof(numA[0]);

	double numB[] = {22.0, 11.0, 44.0, 33.0, 55.0};
	double arrSizeB = sizeof(numB) / sizeof(numB[0]);
	
	double numC[] = {12.8, 15.4, 10.4, 0.9, 2.7, 15.1, 20.2, 6.8};
	double arrSizeC = sizeof(numC) / sizeof(numC[0]);

	printf("\n");
	printf("Printing out given array info\n\n");
	
	outputArray(numA, arrSizeA);
	outputArray(numB, arrSizeB); 
	outputArray(numC, arrSizeC);

	return 0; 
}
