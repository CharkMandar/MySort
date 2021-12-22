#include<stdio.h>
#include"My_Sort.h"
#include<stdlib.h>
#include<time.h>

int main() {
	int Varr[3] = { 10000, 50000, 100000 };
	srand(time(0));
	int N = 1;
	double t1, t2, wtime;


	printf("\n \n ");

	for (int i = 0; i < 3; i++) {

		N = Varr[i];
		double* arr = (double*)malloc(N * sizeof(double));


		for (int j = 0; j < N; j++)
			arr[j] = 2.0 + rand() % 1000;

		for (int i = 0; i < 5; i++)
			printf("%.2lf \n", arr[i]);

		printf("iteration number %d \n \n", i);

		t1 = clock();
		BubbleSort(arr, N);
		t2 = clock();
		wtime = (t2 - t1) / (CLOCKS_PER_SEC);
		printf("BubbleSort: \n");
		for (int i = 1000; i < 4001; i += 500)
			printf("%.2lf \n", arr[i]);
		printf("time = %lf \n", wtime);


		printf("\n \n");

		t1 = clock();
		SelectionSort(arr, N);
		t2 = clock();
		wtime = (t2 - t1) / (CLOCKS_PER_SEC);
		printf("SelectionSort: \n");
		for (int i = 1000; i < 4001; i += 500)
			printf("%.2lf \n", arr[i]);
		printf("time = %lf \n", wtime);


		printf("\n \n");

		t1 = clock();
		QuickSort(arr, N);
		t2 = clock();
		wtime = (t2 - t1) / (CLOCKS_PER_SEC);
		printf("QuickSort: \n");
		for (int i = 1000; i < 4001; i+= 500)
			printf("%.2lf \n", arr[i]);
		printf("time = %lf \n", wtime);

		printf("\n \n");


		free(arr);
	}


	int Barr[3] = { 5, 10, 12 };

	for (int i = 0; i < 3; i++) {
		N = Barr[i];
		
		printf("Bogosort iteration number %d \n \n", i);

		double* arr = (double*)malloc(N * sizeof(double));

		for (int j = 0; j < N; j++)
			arr[j] = rand() % 1000;

		t1 = clock();
		Bogosort(arr, N);
		t2 = clock();
		wtime = (t2 - t1) / (CLOCKS_PER_SEC);
		printf("BogoSort: \n");
		printf("time = %lf \n", wtime);
		for (int i =0; i < N; i++)
			printf("%.2lf \n", arr[i]);


		free(arr);

	}
		
	return 0;
}