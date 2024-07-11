#include <iostream>
#include <iomanip>
#include <vector>
#include <conio.h>

#define SIZE 10
using namespace std;

void synthetic_division() {
    int n, ca, cb, cc, cd, ce, cf, ra, rx;
    vector<int> coefficients;

    cout << "Synthetic Division\nEnter number of coefficients\n";
    cin >> n;

    cout << "Enter coefficients (" << n << ")\n";
    coefficients.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> coefficients[i];
    }

    cout << "Enter root to evaluate\n";
    cin >> ra;
    rx = -ra;

    for (int i = 1; i < n; ++i) {
        coefficients[i] += coefficients[i - 1] * rx;
    }

    for (int i = 0; i < n; ++i) {
        cout << coefficients[i] << " ";
    }

    getch();
}

void gauss_jordan() {
    int n;
    float ga[SIZE][SIZE + 1], gx[SIZE], rat;

    cout << "Matrix Solution by Gauss Jordan\nEnter number of unknowns:\n";
    cin >> n;
    cout << setprecision(3) << fixed;

    cout << "Enter the coefficients of the matrix: " << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n + 1; ++j) {
            cout << "a[" << i << "]" << j << "]= ";
            cin >> ga[i][j];
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (ga[i][i] == 0.0) {
            cout << "Error!";
            exit(0);
        }
        for (int j = 1; j <= n; ++j) {
            if (i != j) {
                rat = ga[j][i] / ga[i][i];
                for (int k = 1; k <= n + 1; ++k) {
                    ga[j][k] -= rat * ga[i][k];
                }
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        gx[i] = ga[i][n + 1] / ga[i][i];
    }

    cout << endl << "Solution: " << endl;
    for (int i = 1; i <= n; ++i) {
        cout << "x[" << i << "] = " << gx[i] << endl;
    }
}

void matrix_addition() {
    int r, c;
    int sa[100][100], sb[100][100], sum[100][100];

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r;
    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> sa[i][j];
        }
    }

    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> sb[i][j];
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            sum[i][j] = sa[i][j] + sb[i][j];
        }
    }

    cout << endl << "Sum of the two matrices is: " << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << sum[i][j] << "  ";
            if (j == c - 1) cout << endl;
        }
    }
}

void matrix_multiplication() {
    int r1, c1, r2, c2;
    int ma[10][10], mb[10][10], mult[10][10] = {0};

    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    while (c1 != r2) {
        cout << "Error! Column of the first matrix is not equal to row of the second.";
        cout << "Enter rows and columns for the first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for the second matrix: ";
        cin >> r2 >> c2;
    }

    cout << endl << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> ma[i][j];
        }
    }

    cout << endl << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> mb[i][j];
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                mult[i][j] += ma[i][k] * mb[k][j];
            }
        }
    }

    cout << endl << "Output Matrix: " << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << " " << mult[i][j];
            if (j == c2 - 1) cout << endl;
        }
    }
}

int main() {
    int op;
    cout << "Advanced Calculator\nEnter operation:\n\n(1) Synthetic Division\n(2) Matrix Solution by Gauss Jordan\n(3) Matrix Addition\n(4) Matrix Multiplication\n\n";
    cin >> op;

    switch (op) {
        case 1:
            synthetic_division();
            break;
        case 2:
            gauss_jordan();
            break;
        case 3:
            matrix_addition();
            break;
        case 4:
            matrix_multiplication();
            break;
        default:
            cout << "Invalid option";
            break;
    }

    return 0;
}
