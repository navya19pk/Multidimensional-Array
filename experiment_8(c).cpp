// Navya Pawan Khajuria 
// 24070123151
// B3

#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if(c1 != r2) {
        cout << "Matrix multiplication not possible! (c1 must equal r2)" << endl;
        return 0;
    }

    int A[100][100], B[100][100], result[100][100];

    // Input matrix A
    cout << "\nEnter elements of first matrix (A):\n";
    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c1; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nEnter elements of second matrix (B):\n";
    for(int i = 0; i < r2; ++i) {
        for(int j = 0; j < c2; ++j) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            result[i][j] = 0;
        }
    }

    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            for(int k = 0; k < c1; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nResultant Matrix after multiplication:\n";
    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Output:
//Enter rows and columns for first matrix: 2 2 
//Enter rows and columns for second matrix: 2 2 

//Enter elements of first matrix (A):
//A[0][0]: 0
//A[0][1]: 1
//A[1][0]: 6
//A[1][1]: 1

//Enter elements of second matrix (B):
//B[0][0]: 2
//B[0][1]: 2
//B[1][0]: 7
//B[1][1]: 4

//Resultant Matrix after multiplication:
//7 4 
//19 16 

