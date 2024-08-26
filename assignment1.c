#include <stdio.h>
#include <math.h>

double calculate_sum(double arr[], int size)
{
	double sum = 0.0;
	for(int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double calculate_average(double arr[], int size)
{
	double sum = calculate_sum(arr, size);
	
	return sum/size;
}

double calculate_std_dev(double arr[], int size)
{
	double mean = calculate_average(arr, size);
	double sum_of_squares = 0.0;

	for(int i = 0; i < size; i++)
	{
		sum_of_squares += pow(arr[i] - mean, 2);
	}
	return sqrt(sum_of_squares/size);
}

int main()
{
	double arr1[] = {2.5, 3.0, 7.8, 1.2, 5.9};
	double arr2[] = {4.0, 5.0, 6.0};
	double arr3[] = {10.0, 15.0, 20.0, 25.0, 30.0, 35.0};

	printf("Array 1:\n");
	printf("Sum: %.2f\n", calculate_sum(arr1, 5));
	printf("Average: %.2f\n", calculate_average(arr1, 5));
	printf("Standard Deviation: %.2f\n\n", calculate_std_dev(arr1, 5));

	printf("Arraay 2:\n");
	printf("Sum: %.2f\n", calculate_sum(arr2, 3));
	printf("Average: %.2f\n", calculate_average(arr2, 3));
	printf("Standard Deviation: %.2f\n\n", calculate_std_dev(arr2, 3));

	printf("Array 3:\n");
	printf("Sum: %.2f\n", calculate_sum(arr3, 6));
	printf("Average: %.2f\n", calculate_average(arr3, 6));
	printf("Standard Deviation: %.2f\n\n", calculate_std_dev(arr3, 6));

	return 0;

}
