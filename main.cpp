#include<iostream>
#include<iomanip>
#include<conio.h>
#define   SIZE   10
using namespace std;
int main()
{
    int op,ca,cb,cc,cd,ce,cf,ra,rx,r1,c1,r2,c2;
    int a,b,c,d,e,f,i,j,k,r,n;
    int sa[100][100],sb[100][100],suma[100][100];
    int ma[10][10], mb[10][10], mult[10][10];
    float ga[SIZE][SIZE],gx[SIZE],rat;
    cout<<"Calculadora mamalona\nIngrese operacion:\n\n(1) Division sintetica\n(2) Solucion de matrices por Gauss Jordan\n(3) Suma de matices\n(4) Multiplicacion de matrices\n\n";
    cin>>op;
    if(op==1) {
        cout << "Division sintetica\nIngrese numero de coeficientes\n";
        cin >> n;
        cout << "Ingrese coeficientes (" << n << ")\n";
        if (n == 1) {
            cin >> ca;
        } else if (n == 2) {
            cin >> ca >> cb;
        } else if (n == 3) {
            cin >> ca >> cb >> cc;
        } else if (n == 4) {
            cin >> ca >> cb >> cc >> cd;
        } else if (n == 5) {
            cin >> ca >> cb >> cc >> cd >> ce;
        } else if (n == 6) {
            cin >> ca >> cb >> cc >> cd >> ce >> cf;
        } else {
            cout << "Error, sintaxis invalida o numero de coeficientes mayor a 6";
            exit(0);
        }
        cout << "Ingrese raiz a evaluar\n";
        cin >> ra;
        if (n == 1) {
            rx = (-1) * ra;
            a = ca;
            cout << a;
        } else if (n == 2) {
            rx = (-1) * ra;
            a = ca;
            b = cb + (a * rx);
            cout << a << " " << b;
        } else if (n == 3) {
            rx = (-1) * ra;
            a = ca;
            b = cb + (a * rx);
            c = cc + (b * rx);
            cout << a << " " << b << " " << c;
        } else if (n == 4) {
            rx = (-1) * ra;
            a = ca;
            b = cb + (a * rx);
            c = cc + (b * rx);
            d = cd + (c * rx);
            cout << a << " " << b << " " << c << " " << d;
        } else if (n == 5) {
            rx = (-1) * ra;
            a = ca;
            b = cb + (a * rx);
            c = cc + (b * rx);
            d = cd + (c * rx);
            e = ce + (d * rx);
            cout << a << " " << b << " " << c << " " << d << " " << e;
        } else if (n == 6) {
            rx = (-1) * ra;
            a = ca;
            b = cb + (a * rx);
            c = cc + (b * rx);
            d = cd + (c * rx);
            e = ce + (d * rx);
            f = cf + (e * rx);
            cout << a << " " << b << " " << c << " " << d << " " << e << " " << f;
        }

        getch();
        return 0;
    }
    else if(op==2){
        cout<<"Solucion de matrices por Gauss Jordan\nIngrese numero de incognitas:\n";
        /* Setting precision and writing floating point values in fixed-point notation. */
        cout<< setprecision(3)<< fixed;
        /* Inputs */
        /* 1. Reading number of unknowns */
        cin>>n;
        /* 2. Reading Augmented Matrix */
        cout<<"Ingrese los coeficientes de la matriz: "<< endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n+1;j++)
            {
                cout<<"a["<< i<<"]"<< j<<"]= ";
                cin>>ga[i][j];
            }
        }
        /* Applying Gauss Jordan Elimination */
        for(i=1;i<=n;i++)
        {
            if(ga[i][i] == 0.0)
            {
                cout<<"Error!";
                exit(0);
            }
            for(j=1;j<=n;j++)
            {
                if(i!=j)
                {
                    rat = ga[j][i] / ga[i][i];
                    for(k=1;k<=n+1;k++)
                    {
                        ga[j][k] = ga[j][k] - rat * ga[i][k];
                    }
                }
            }
        }
        /* Obtaining Solution */
        for(i=1;i<=n;i++)
        {
            gx[i] = ga[i][n+1]/ga[i][i];
        }
        /* Displaying Solution */
        cout<< endl<<"Solucion: "<< endl;
        for(i=1;i<=n;i++)
        {
            cout<<"x["<< i<<"] = "<< gx[i]<< endl;
        }
        return(0);
    }
    else if(op==3){
        cout << "Enter number of rows (between 1 and 100): ";
        cin >> r;
        cout << "Enter number of columns (between 1 and 100): ";
        cin >> c;
        cout << endl << "Enter elements of 1st matrix: " << endl;
        // Storing elements of first matrix entered by user.
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j)
            {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> sa[i][j];
            }
        // Storing elements of second matrix entered by user.
        cout << endl << "Enter elements of 2nd matrix: " << endl;
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j)
            {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> sb[i][j];
            }
        // Adding Two matrices
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j)
                suma[i][j] = sa[i][j] + sb[i][j];
        // Displaying the resultant suma matrix.
        cout << endl << "Sum of two matrix is: " << endl;
        for(i = 0; i < r; ++i)
            for(j = 0; j < c; ++j)
            {
                cout << suma[i][j] << "  ";
                if(j == c - 1)
                    cout << endl;
            }
        return 0;
    }
    else if(op==4){
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
        // If column of first matrix in not equal to row of second matrix,
        // ask the user to enter the size of matrix again.
        while (c1!=r2)
        {
            cout << "Error! column of first matrix not equal to row of second.";
            cout << "Enter rows and columns for first matrix: ";
            cin >> r1 >> c1;
            cout << "Enter rows and columns for second matrix: ";
            cin >> r2 >> c2;
        }
        // Storing elements of first matrix.
        cout << endl << "Enter elements of matrix 1:" << endl;
        for(i = 0; i < r1; ++i)
            for(j = 0; j < c1; ++j)
            {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> ma[i][j];
            }
        // Storing elements of second matrix.
        cout << endl << "Enter elements of matrix 2:" << endl;
        for(i = 0; i < r2; ++i)
            for(j = 0; j < c2; ++j)
            {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> mb[i][j];
            }
        // Initializing elements of matrix mult to 0.
        for(i = 0; i < r1; ++i)
            for(j = 0; j < c2; ++j)
            {
                mult[i][j]=0;
            }
        // Multiplying matrix a and b and storing in array mult.
        for(i = 0; i < r1; ++i)
            for(j = 0; j < c2; ++j)
                for(k = 0; k < c1; ++k)
                {
                    mult[i][j] += ma[i][k] * mb[k][j];
                }
        // Displaying the multiplication of two matrix.
        cout << endl << "Output Matrix: " << endl;
        for(i = 0; i < r1; ++i)
            for(j = 0; j < c2; ++j)
            {
                cout << " " << mult[i][j];
                if(j == c2-1)
                    cout << endl;
            }
        return 0;
    }
}