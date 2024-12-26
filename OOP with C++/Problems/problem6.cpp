//  Write a program for multiplication of two matrices using OOP. 


#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    int rows, cols;
    vector<vector<int>> data;

public:
    // Constructor to initialize the matrix
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c, 0)) {}

    // Method to input matrix elements
    void input() {
        cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }

    // Method to display the matrix
    void display() const {
        for (const auto &row : data) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    // Friend function to multiply two matrices
    friend Matrix multiply(const Matrix &m1, const Matrix &m2);

    // Getters for rows and columns
    int getRows() const { return rows; }
    int getCols() const { return cols; }
};

// Function to multiply two matrices
Matrix multiply(const Matrix &m1, const Matrix &m2) {
    if (m1.cols != m2.rows) {
        throw invalid_argument("Matrix dimensions do not allow multiplication.");
    }

    Matrix result(m1.rows, m2.cols);

    for (int i = 0; i < m1.rows; ++i) {
        for (int j = 0; j < m2.cols; ++j) {
            for (int k = 0; k < m1.cols; ++k) {
                result.data[i][j] += m1.data[i][k] * m2.data[k][j];
            }
        }
    }

    return result;
}

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible with the given dimensions.\n";
        return 1;
    }

    Matrix m1(rows1, cols1), m2(rows2, cols2);

    cout << "Input first matrix:\n";
    m1.input();
    cout << "Input second matrix:\n";
    m2.input();

    try {
        Matrix result = multiply(m1, m2);
        cout << "Resultant matrix after multiplication:\n";
        result.display();
    } catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}