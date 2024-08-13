#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
    
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(r, vector<int>(c, 0));
    }

    void input() {
        cout << "Enter matrix values:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix multiply(const Matrix &other) const {
        if (cols != other.rows) {
            throw invalid_argument("Incompatible matrix dimensions for multiplication.");
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
private:
    int rows, cols;
    vector<vector<int>> data;
};

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    Matrix mat1(r1, c1);
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    Matrix mat2(r2, c2);
    if (c1 != r2) {
        cout << "Matrix dimensions are not compatible for multiplication." << endl;
        return 1;
    }
    cout << "Input for first matrix:" << endl;
    mat1.input();
    cout << "Input for second matrix:" << endl;
    mat2.input();
    Matrix result = mat1.multiply(mat2);
    cout << "Resultant matrix:" << endl;
    result.display();
    return 0;
}