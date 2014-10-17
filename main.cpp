#include <iostream>

using namespace std;

/* constants */
const int DIMS = 2;

/* function prototypes */
void PrintMatrix(double matrix[DIMS][DIMS]);
void PrintInstructions();
void InputMatrix(double matrix[DIMS][DIMS]);
void MultiplyMatrices(double matrix1[DIMS][DIMS], double matrix2[DIMS][DIMS], double result[DIMS][DIMS]);

int main() {

	/* print instructions */
	PrintInstructions();
	
	/* get matrices */
	cout << "Input first matrix:" << endl;
	double matrix1[DIMS][DIMS];
	InputMatrix(matrix1);
	cout << endl;
	
	cout << "Input second matrix:" << endl;
	double matrix2[DIMS][DIMS];
	InputMatrix(matrix2);
	cout << endl;
	
	double result[DIMS][DIMS];
	MultiplyMatrices(matrix1, matrix2, result);

	/* print matrix */
	PrintMatrix(result);
}

void PrintInstructions() {
	cout << endl;
	cout << "This program will ask you to input two" << endl;
	cout << "matrices and print out their product." << endl;
	cout << endl;
	return;
}

void InputMatrix(double matrix[DIMS][DIMS]) {
	cout << "First row values separated by spaces:" << endl;
	cin >> matrix[0][0];
	cin >> matrix[0][1];

	cout << "Second row values separated by spaces:" << endl;
	cin >> matrix[1][0];
	cin >> matrix[1][1];
	
	return;
}

void MultiplyMatrices(double matrix1[DIMS][DIMS], double matrix2[DIMS][DIMS], double result[DIMS][DIMS]) {
	for (unsigned short int i = 0; i < DIMS; ++i) {
		double row[2] = { matrix1[i][0], matrix1[i][1] };
		for (unsigned short int j = 0; j < DIMS; ++j) {
			double vector[2] = { matrix2[0][j], matrix2[1][j] };	
			result[i][j] = row[0] * vector[0] + row[1] * vector[1];
		}
	}	
	return; 	
}

void PrintMatrix(double matrix[DIMS][DIMS]) {
	for (unsigned short int i = 0; i < DIMS; ++i) {
		for (unsigned short int j = 0; j < DIMS; ++j) {
			cout << matrix[i][j];
			cout << " ";
		}
		cout << endl;
	}
}
