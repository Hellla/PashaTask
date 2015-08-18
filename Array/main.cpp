#include "ArrayLib.h"

int main(int argc, char *argv[]){

	if (argc != 2){
		printf("Wrong number of arguments. Needed exactly one argument.\n");
		return 1;
	}
	int n = atoi(argv[1]);

	int * mas = NULL;
	initArray(&mas, n);
	printArray(mas, n);
	sortArray(mas, n);
	printArray(mas, n);

	printf("%d\n", findNumber(mas, mas[n / 2 + 1], 0, n - 1));


	free(mas);
	return 0;
}

