#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define LEN 10

void GenerateArr(int arr[]);
void PrintArr(int arr[]);
void BubbleSort(int arr[]);
void QuickSort(int arr[]);

int main(){
	
	int arr[LEN];
	
	GenerateArr(arr);
	printf("BubbleSort--START--\n");
	PrintArr(arr);
	BubbleSort(arr);
	printf("BubbleSort--FINISH--\n");
	PrintArr(arr);

	GenerateArr(arr);
	printf("QuickSort--START--\n");
	PrintArr(arr);
	QuickSort(arr);
	printf("QuickSort--FINISH--\n");
	PrintArr(arr);
}

void BubbleSort(int arr[]){
	for (int i = 0; i < LEN; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

void QuickSort(int arr[]){

}

void GenerateArr(int arr[]){
	for(int i=0; i < LEN; i++){
		arr[i] = rand()%20+3;
	}
}

void PrintArr(int arr[]){

	for (int i = 0; i < LEN; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}