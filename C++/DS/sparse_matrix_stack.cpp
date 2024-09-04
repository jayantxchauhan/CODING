#include <iostream>
using namespace std;
struct SparseMatrixEntry {
    int row;
    int col;
    int value;
};

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    int nonZeroCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }
    SparseMatrixEntry sparseMatrix[nonZeroCount];
    int k = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] != 0) {
                sparseMatrix[k].row = i;
                sparseMatrix[k].col = j;
                sparseMatrix[k].value = matrix[i][j];
                k++;
            }
        }
    }
    cout << "\nSparse Matrix representation (row, column, value):\n";
    for (int i = 0; i < nonZeroCount; ++i) {
        cout << sparseMatrix[i].row << " " 
             << sparseMatrix[i].col << " " 
             << sparseMatrix[i].value << endl;
    }

    return 0;
}
