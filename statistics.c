#include <math.h>

double sum (double arr[], double size){
	double sum = 0;
	for(int i = 0; i < size; i++){
		sum += arr[i];
	}
	return sum;
}

double average (double arr[], double size){
	double avg = 0;
	return avg = sum(arr, size) / size;
}

double stdDev (double arr[], double size){
  double avg = average(arr, size);
  double sum = 0;
  double square = 0;
  double stdDev = 0;
 
  for(int i = 0; i < size; i++){
		square = pow((arr[i] - avg), 2);
    sum += (square);
	}
	return stdDev = sqrt(sum / size);
}

double maxArr(double arr[], double size){
	double max = arr[0];
	for(int i = 0; i < size; i++){
		if(max < arr[i]){
			max = arr[i]; 
 		}
	}
	return max;
}

double minArr(double arr[], double size){
	double min = arr[0];
	for(int i = 0; i < size; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

double absDiff(double arr[], double size){
	double absDiff = 0; 
	double min = minArr(arr, size);
	double max = maxArr(arr, size);

  return absDiff = fabs(max - min);
}

