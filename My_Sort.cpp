#include"My_Sort.h"
#include<stdlib.h>
	

double BubbleSort(double *arr, int N) {
	double tmp;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (arr[j] > arr[j+1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	return *arr;
}


double SelectionSort(double* arr, int N) {
	int maxInd = 0;
	double tmp;
	for (int i = 0; i < N; i++) {
		maxInd = i;
		for (int j = i+1; j < N; j++)
			if (arr[j] < arr[maxInd])
				maxInd = j;
		tmp = arr[maxInd];
		arr[maxInd] = arr[i];
		arr[i] = tmp;
	}
	return *arr;
}


double is_sorted(double* arr, int N)
{
	while (N >= 1) {
		N -= 1;
		if (arr[N] < arr[N - 1])
			return (0);
	}
	return (1);
}


double Bogosort(double* arr, int N){

	while (!is_sorted(arr, N)) {  
		int i, t, randInd;
		for (i = 0; i < N; i++) {
			t = arr[i];
			randInd = rand() % N;
			arr[i] = arr[randInd];
			arr[randInd] = t;
		}
	}

	return *arr;

}


double QuickSort(double* arr, int N) {
	int i = 0;
	int j = N - 1;
	int mid = arr[N / 2];

	do {
		while (arr[i] < mid) {
			i++;
		}
		while (arr[j] > mid) {
			j--;
		}
		if (i <= j) {
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	} while (i <= j);


	if (j > 0) {
		QuickSort(arr, j + 1);
	}
	if (i < N) {
		QuickSort(&arr[i], N - i);
	}

	return *arr;
}