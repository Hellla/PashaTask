#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>

#include "MatrixLib.h"

using std::cout;
using std::endl;

double **initMatrix(int rows, int columns)
{
	double **matrix = new double*[rows];
	for (int i = 0; i < rows; ++i){
		matrix[i] = new double[columns];
	}

	srand(time(NULL)); // присваивает rand() начальное число, равное текущему времени

	for (int i = 0; i < rows; ++i){
		for (int j = 0; j < columns; ++j){
			matrix[i][j] = (rand() % 100 + 1.0) + (rand() % 100 / 100.0);
		}
	}
	return matrix;
}

void printMatrix(double **matrix, int rows, int columns)
{
	for (int i = 0; i < rows; ++i){
		for (int j = 0; j < columns; ++j){
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

double **multiplyMatrices(double **matr1, double **matr2, int rows1, int cols1, int rows2, int cols2, int &newRows, int &newCols){
	if (cols1 != rows2){
		return NULL;
	}

	newRows = rows1;
	newCols = cols2;
	double **newMatrix = initMatrix(newRows, newCols);

	for (int i = 0; i < newRows; ++i){
		for (int j = 0; j < newCols; ++j){
			double sum = 0;
			for (int k = 0; k < cols1; k++){
				sum += matr1[i][k] * matr2[k][j];
			}
			newMatrix[i][j] = sum;
		}
	}
	return newMatrix;
}

double **getMatrFromFile(const char *s, int &rows, int &cols){
	std::ifstream inFile;
	inFile.open(s);
	if (!inFile.is_open()){
		cout << "Could not open the file" << endl;
		exit(EXIT_FAILURE);
	}

	inFile >> rows;
	inFile >> cols;
	double **matrix = new double*[rows];
	for (int i = 0; i < rows; ++i){
		matrix[i] = new double[cols];
	}
	

	for (int i = 0; i < rows; ++i){
		for (int j = 0; j < cols; ++j){
			inFile >> matrix[i][j];
		}
	}

	inFile.close();
	return matrix;
}
