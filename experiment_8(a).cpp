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

    // Declare the matrix
    int matrix[100][100]; 

    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Display matrix
    cout << "\nThe matrix is:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Output:
//Enter number of rows: 2
//Enter number of columns: 2
//Enter elements of the matrix:
//Element at [0][0]: 1
//Element at [0][1]: 3
//Element at [1][0]: 4
//Element at [1][1]: 6

//The matrix is:
//1 3 
//4 6
