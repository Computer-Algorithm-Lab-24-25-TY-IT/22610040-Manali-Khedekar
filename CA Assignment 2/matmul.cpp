#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], result[10][10] = {0};
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter rows and columns for matrix A: ";
    cin >> rowsA >> colsA;
    cout << "Enter rows and columns for matrix B: ";
    cin >> rowsB >> colsB;

    if (colsA != rowsB) {
        cout << "Matrix multiplication not possible." << endl;
        return 1;
    }

    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsA; ++j)
            cin >> a[i][j];

    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; ++i)
        for (int j = 0; j < colsB; ++j)
            cin >> b[i][j];

    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsB; ++j)
            for (int k = 0; k < colsA; ++k)
                result[i][j] += a[i][k] * b[k][j];

    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
