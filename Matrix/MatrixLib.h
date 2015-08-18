#ifndef MatrixLib_H_
#define MatrixLib_H_

double **initMatrix(int, int);
void printMatrix(double **, int, int);
double **multiplyMatrices(double **, double **, int, int, int, int, int&, int&);
double **getMatrFromFile(const char *, int&, int&);

#endif