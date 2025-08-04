// Navya Pawan Khajuria 
// 24070123151
// B3

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;

    for(int i = 0; i < n; ++i) {
        primarySum += matrix[i][i];                  
        secondarySum += matrix[i][n - i - 1];       
    }

    cout << "\nPrimary diagonal sum: " << primarySum << endl;
    cout << "Secondary diagonal sum: " << secondarySum << endl;

    return 0;
}

//Output:
//Enter the size of the square matrix (n x n): 2 2 
//Enter the elements of the matrix:
//Element [0][0]: Element [0][1]: 1
//Element [1][0]: 1
//Element [1][1]: 3

//Primary diagonal sum: 5
//Secondary diagonal sum: 2/


