#include <iostream>

#include "MatrixLib.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[]){
	if (argc != 5){
		cout << "Wrong number of arguments" << endl;
		return 1;
	}

	int rows1 = atoi(argv[1]);
	int columns1 = atoi(argv[2]);
	int rows2 = atoi(argv[3]);
	int columns2 = atoi(argv[4]);

	double **matrix1 = getMatrFromFile("test.txt", rows1, columns1);
	/*double **matrix2 = initMatrix(rows2, columns2);
	printMatrix(matrix1, rows1, columns1);
	cout << endl;
	printMatrix(matrix2, rows2, columns2);
	cout << endl;

	int rows3 = 0;
	int columns3 = 0;
	double **matr3 = multiplyMatrices(matrix1, matrix2, rows1, columns1, rows2, columns2, rows3, columns3);
	if (matr3 != NULL){
		printMatrix(matr3, rows3, columns3);
	}
	//getMatrFromFile("test.txt", rows3, columns3);*/

	printMatrix(matrix1, rows1, columns1);
	
	return 0;
}
