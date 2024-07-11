# Advanced Calculator

This is a simple console-based calculator program written in C++ that offers four main functionalities:
1. Synthetic Division
2. Matrix Solution using Gauss-Jordan Elimination
3. Matrix Addition
4. Matrix Multiplication

## Table of Contents
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Features

- **Synthetic Division**: Evaluate polynomial division using synthetic division.
- **Gauss-Jordan Elimination**: Solve systems of linear equations using the Gauss-Jordan elimination method.
- **Matrix Addition**: Add two matrices of size up to 100x100.
- **Matrix Multiplication**: Multiply two matrices, ensuring the number of columns in the first matrix equals the number of rows in the second matrix.

## Installation

1. **Compile the Code**
   Use any C++ compiler to compile the code. For example, using `g++`:
   ```bash
   g++ -o calculator calculator.cpp
   ```

2. **Run the Executable**
   ```bash
   ./calculator
   ```

## Usage

Upon running the program, you will be prompted to choose one of the four operations. Enter the corresponding number to select an operation and follow the on-screen instructions.

### Menu Options

1. **Synthetic Division**: 
   - Enter the number of coefficients.
   - Enter the coefficients.
   - Enter the root to evaluate.

2. **Gauss-Jordan Elimination**:
   - Enter the number of unknowns.
   - Enter the coefficients of the augmented matrix.

3. **Matrix Addition**:
   - Enter the number of rows and columns for the matrices.
   - Enter the elements of the first matrix.
   - Enter the elements of the second matrix.
   - The program will output the sum of the matrices.

4. **Matrix Multiplication**:
   - Enter the number of rows and columns for the first matrix.
   - Enter the number of rows and columns for the second matrix.
   - Enter the elements of the first matrix.
   - Enter the elements of the second matrix.
   - The program will output the product of the matrices.

## Examples

### Synthetic Division
```
Synthetic Division
Enter number of coefficients
3
Enter coefficients (3)
2 3 4
Enter root to evaluate
1
Output: 2 5 9
```

### Gauss-Jordan Elimination
```
Matrix Solution by Gauss Jordan
Enter number of unknowns:
3
Enter the coefficients of the matrix:
a[1][1]= 1
a[1][2]= 2
a[1][3]= 3
a[1][4]= 4
a[2][1]= 5
a[2][2]= 6
a[2][3]= 7
a[2][4]= 8
a[3][1]= 9
a[3][2]= 10
a[3][3]= 11
a[3][4]= 12
Solution:
x[1] = -1.000
x[2] = 1.000
x[3] = 0.000
```

### Matrix Addition
```
Enter number of rows (between 1 and 100): 2
Enter number of columns (between 1 and 100): 2

Enter elements of 1st matrix:
Enter element a11 : 1
Enter element a12 : 2
Enter element a21 : 3
Enter element a22 : 4

Enter elements of 2nd matrix:
Enter element b11 : 5
Enter element b12 : 6
Enter element b21 : 7
Enter element b22 : 8

Sum of the two matrices is:
6 8
10 12
```

### Matrix Multiplication
```
Enter rows and columns for the first matrix: 2 3
Enter rows and columns for the second matrix: 3 2

Enter elements of matrix 1:
Enter element a11 : 1
Enter element a12 : 2
Enter element a13 : 3
Enter element a21 : 4
Enter element a22 : 5
Enter element a23 : 6

Enter elements of matrix 2:
Enter element b11 : 7
Enter element b12 : 8
Enter element b21 : 9
Enter element b22 : 10
Enter element b31 : 11
Enter element b32 : 12

Output Matrix:
 58 64
 139 154
```

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes. Ensure your code adheres to the existing style and add tests for any new features or bug fixes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
