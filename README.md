Aim: To study and implement Multidimensional Array in C++

#Program a: This program takes user input to create a 2D matrix, stores the values, and then displays the matrix in a formatted way. It starts by asking the user for the number of rows and columns then uses nested loops to take input for each element of the matrix. After storing all the values, the matrix is displayed in row-column format. This code is ideal for beginners learning 2D arrays and nested loops in C++.

Algorithm:

- Step 1: Start
- Step 2: Prompt user for number of rows and columns.
- Step 3: Declare a 2D array matrix[100][100] (large enough to handle user input).
- Step 4: Input Elements:
- Step 5: Loop through i = 0 to rows-1
- Step 6: Loop through j = 0 to cols-1
- Step 7:Prompt and store input in matrix[i][j]
- Step 8: Display Matrix:
- Step 9: Loop through i = 0 to rows-1
- Step 10: Loop through j = 0 to cols-1
- Step 11: Print matrix[i][j]
- Step 12: End

#Program b: This C++ program allows the user to perform the addition of two matrices. It begins by taking input from the user for the number of rows and columns. After the dimensions are provided, it prompts the user to enter the elements of the first matrix, followed by the elements of the second matrix. These values are stored in two separate 2D arrays named matrix1 and matrix2. Once both matrices have been filled, the program proceeds to compute their sum. This is done by iterating through each element using nested loops and adding the corresponding elements from the two matrices. The result of each addition is stored in a third 2D array named sum. Finally, the program displays the resulting matrix, which contains the element-wise sum of the two input matrices.

Algorithm:

- Step 1: Start
- Step 2: Input number of rows and columns
- Step 3: Declare 2D arrays:
- matrix1[100][100]
- matrix2[100][100]
- sum[100][100]
- Step 4: Input Matrix 1:
- Step 5: For each row i from 0 to rows-1:
- Step 6: For each column j from 0 to cols-1:
- Step 7: Read value into matrix1[i][j]
- Step 8: Input Matrix 2:
- Step 9: Input Matrix 2:
- Step 10: Repeat similar nested loop to fill matrix2
- Step 11: Add Matrices:
- Step 12: For each element sum[i][j] = matrix1[i][j] + matrix2[i][j]
- Step 13: End

#Program c: This C++ program performs matrix multiplication. It starts by taking the dimensions of two matrices from the user. The program ensures that the number of columns in the first matrix is equal to the number of rows in the second matrix. This is a necessary condition for matrix multiplication; otherwise, the operation is mathematically undefined. If the condition isn't met, the program displays an error message and exits. After verifying the dimensions, the program proceeds to read the values for both matrices A and B. It stores these values in two 2D arrays. A third matrix, result, is initialized to zero to hold the product of the two matrices.

Algorithm:

- Step 1: Start
- Step 2: Input the number of rows (r1) and columns (c1) for the first matrix.
- Step 3: Input the number of rows (r2) and columns (c2) for the second matrix.
- Step 4: Check if matrix multiplication is possible:
- Step 5: If c1 != r2, display "Matrix multiplication not possible" and terminate the program.
- Step 6: Declare three matrices:
- Step 7: A[r1][c1] for the first matrix.
- Step 8: B[r2][c2] for the second matrix.
- Step 9: result[r1][c2] to store the product, initialized to 0.
- Step 10: Input elements of matrix A using nested loops (for i = 0 to r1-1 and j = 0 to c1-1).
- Step 11: Input elements of matrix B using nested loops (for i = 0 to r2-1 and j = 0 to c2-1).
- Step 12: Initialize all elements of result matrix to 0.
- Step 13: Perform multiplication:
- Step 14: For each row i in matrix A (from 0 to r1 - 1)
- Step 15: For each column j in matrix B (from 0 to c2 - 1)
- Step 16: For each k from 0 to c1 - 1 (or r2 - 1)
- Step 17: Multiply A[i][k] * B[k][j] and add it to result[i][j].
- Step 18: Display the resulting matrix result[r1][c2].
- Step 19: End.

#Program d: This C++ program is designed to calculate the sum of the primary and secondary diagonals of a square matrix. The user is first prompted to enter the size of the matrix (since it must be square, only one dimension is needed), and then to enter each of the matrix elements. After the matrix is filled, the program uses a loop to compute two separate sums. The primary diagonal (also known as the main diagonal) contains elements where the row and column indices are the same, i.e., matrix[i][i]. The secondary diagonal (also called the anti-diagonal) contains elements where the column index is the reverse of the row index, i.e., matrix[i][n - i - 1].

Algorithm:

Step 1: Start
Step 2: Input the size n of the square matrix.
Step 3: Declare a 2D array matrix[n][n].
Step 4: Read all elements of the matrix using two nested loops:
Step 5: Outer loop for rows i = 0 to n-1
Step 6: Inner loop for columns j = 0 to n-1
Step 7: Input each matrix[i][j]
Step 8: Initialize two variables: primarySum = 0 and secondarySum = 0.
Step 9: Traverse the matrix diagonally in a single loop from i = 0 to n-1:
Step 10: Add matrix[i][i] to primarySum.
Step 11: Add matrix[i][n - i - 1] to secondarySum.
Step 12: Display both primarySum and secondarySum.
Step 13: End.
  

