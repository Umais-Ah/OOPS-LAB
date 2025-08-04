#include<iostream>
#include <stdexcept>
using namespace std;

class DimensionMismatchException : public exception {
public:
    const char* what() const noexcept override {
        return "Matrix dimensions are not matching";
    }
};

template <typename T>
class Matrix {
private:
    int column, rows;
    T** array;

public:
    Matrix(int rows, int column) : rows(rows), column(column) {
        array = new T*[rows];
        for (int i = 0; i < rows; i++) {
            array[i] = new T[column];
        }
    }


    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] array[i];
        }
        delete[] array;
    }


    void setMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < column; j++) {
                cout << "Enter for index [" << i << "][" << j << "] : ";
                cin >> array[i][j];
            }
        }
    }


    T getArray(int i, int j) {
        return array[i][j];
    }

    int getRows() const {
        return rows;
    }

    int getColumns() const {
        return column;
    }

    friend Matrix<T> MultiplyMatrix(const Matrix<T>& a, const Matrix<T>& b) {
        if (a.column != b.rows) {
            throw DimensionMismatchException();
        }

        Matrix<T> result(a.rows, b.column);
        for (int i = 0; i < a.rows; i++) {
            for (int j = 0; j < b.column; j++) {
                result.array[i][j] = 0;
                for (int k = 0; k < a.column; k++) {
                    result.array[i][j] += a.array[i][k] * b.array[k][j];
                }
            }
        }
        return result;
    }

    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < column; j++) {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    try {
       
        cout << "For Integer Matrix:" << endl;
        Matrix<int> M(2, 2);
        Matrix<int> M2(2, 2);
        cout << "Matrix 1:" << endl;
        M.setMatrix();
        cout << "Matrix 2:" << endl;
        M2.setMatrix();
        Matrix<int> M3 = MultiplyMatrix(M, M2);
        cout << "Multiplication Result:" << endl;
        M3.display();
    }
    catch (const DimensionMismatchException& e) {
        cout << e.what() << endl;
    }

    try {
       
        cout << "For Float Matrix:" << endl;
        Matrix<float> M3(1, 3);
        Matrix<float> M4(3, 2);
        cout << "Matrix 1:" << endl;
        M3.setMatrix();
        cout << "Matrix 2:" << endl;
        M4.setMatrix();
        Matrix<float> M5 = MultiplyMatrix(M3, M4);
        cout << "Multiplication Result:" << endl;
        M5.display();
    }
    catch (const DimensionMismatchException& e) {
        cout << e.what() << endl;
    }

    return 0;
}
