// MatrixFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Use this project to develop scalar multiplication

#include <iostream>
using namespace std;

//output matrix function
void output_matrix(int mat[2][2]) {
    int p, q; //local variables
    //output
    cout << "\nThe matrix output\n";
    for (p = 0; p < 2; p++) {
        for (q = 0; q < 2; q++) {
            cout << mat[p][q] << "\t";
        }
        cout << "\n";
    }
}

//process matrices
void process_matrices(int a[2][2], int b[2][2], char op) {
    int c[2][2];
    int i, j; //local to add_matrices
    if (op == '+') {
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    else {
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                c[i][j] = a[i][j] - b[i][j];
            }
        }
    }
    output_matrix(c);

}



int main()
{
    int matA[2][2], matB[2][2];
    int i, j; //local to main
    char myOperator;
    //input for Matrix A
    cout << "\nEnter the values for Matrix A\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> matA[i][j];
        }
    }
    //input for Matrix B
    cout << "\nEnter the values for Matrix B\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> matB[i][j];
        }
    }
    output_matrix(matA);//passing matrix into a function
    output_matrix(matB);

    cout << "\nEnter the operator(+ or -) to add or subtract the matriceas: ";
    cin >> myOperator;

    //addition of matrix
    process_matrices(matA, matB, myOperator);
}

