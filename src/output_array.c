#include<stdio.h>
#include "statistics.h"

void outputArray(double num[], double size){
 	printf("Array[%.1lf] = ",size);
 	for(int i = 0; i < size; i++){
 		printf("%.2lf ", num[i]);
  }
 	
	printf("\nSum of A: %.2lf\n", sum(num, size));
 	printf("Average of A: %.2lf\n", average(num, size));
 	printf("Standard Deviation of A: %.2lf\n", stdDev(num, size));
 	printf("Minimumm: %.2lf\n", minArr(num, size));
 	printf("Maximum: %.2lf\n", maxArr(num, size));
 	printf("Range: %.2lf\n\n", absDiff(num, size));
}

