#ifndef ArrayLib_H_
#define ArrayLib_H_

#include <stdio.h>
#include <stdlib.h>

void initArray(int **pArray, int size);
void printArray(const int *arr, int size);
void sortArray(int *arr, int size);
int findNumber(int *arr, int num, int, int);

#endif
