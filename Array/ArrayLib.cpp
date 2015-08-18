#include "ArrayLib.h"

void initArray(int ** pArray, int size){
	*pArray = (int *)malloc(size * sizeof(int));
	for (int i = 0; i < size; ++i){
		(*pArray)[i] = rand() % 100 + 1;
	}
}

void sortArray(int * arr, int size){
	for (int i = 0; i < size; ++i){
		for (int j = i + 1; j < size; ++j){
			if (arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int findNumber(int * arr, int num, int beg, int end){
	int mid = end - beg;
	if (mid < 0){
		return -1;
	}
	if (arr[beg + mid / 2] > num){
		end = mid / 2 - 1;
		findNumber(arr, num, beg, end);
	}
	else if (arr[beg + mid / 2] < num){
		beg = mid / 2 + 1;
		findNumber(arr, num, beg, end);
	}
	return mid;
}


void printArray(const int * arr, int size){
	for (int i = 0; i < size; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

