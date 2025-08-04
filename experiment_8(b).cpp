// Navya Pawan Khajuria 
// 24070123151
// B3

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[100][100], matrix2[100][100], sum[100][100];

    cout << "\nEnter elements of first matrix:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << "matrix1[" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "\nEnter elements of second matrix:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << "matrix2[" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "\nSum of the two matrices is:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Enter number of rows: 2
//Enter number of columns: 3

//Enter elements of first matrix:
//matrix1[0][0]: 1
//matrix1[0][1]: 2
//matrix1[0][2]: 4
//matrix1[1][0]: 5
//matrix1[1][1]: 3
//matrix1[1][2]: 5

//Enter elements of second matrix:
//matrix2[0][0]: 7
//matrix2[0][1]: 2
//matrix2[0][2]: 5
//matrix2[1][0]: 7
//matrix2[1][1]: 2
//matrix2[1][2]: 5

//Sum of the two matrices is:
//8 4 9 
//12 5 10 


=== Code Execution Successful ===
