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

    int matrix[100][100], transpose[100][100];

    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Transpose logic
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTranspose of the matrix:\n";
    for(int i = 0; i < cols; ++i) {
        for(int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Output:
//Enter number of rows: 2
//Enter number of columns: 3
//Enter elements of the matrix:
//Element [0][0]: 4
//Element [0][1]: 5
//Element [0][2]: 2
//Element [1][0]: 4
//Element [1][1]: 4
//Element [1][2]: 3

//Transpose of the matrix:
//4 4 
//5 4 
//2 3 

