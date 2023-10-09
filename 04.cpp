#include <iostream>

using namespace std;

int main() {

    int row, col, i, j;
    int m1[10][10], m2[10][10], m3[10][10], sum[10][10];

    cout << "Matrix addition between 3 matrices"<<endl;
    cout << "----------------------------------"<<endl;

    cout << "Enter number of rows (1-10): ";
    cin >> row;

    cout << "Enter number of columns (1-10): ";
    cin >> col;

    cout <<endl<< "Enter the " << row * col << " elements of first matrix : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
                cout << "row " << i + 1 << " column "<< j + 1 << " : ";
                cin >> m1[i][j];
        }
    }

    cout <<endl<< "Enter the " << row * col << " elements of second matrix : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
                cout << "row " << i + 1 << " column "<< j + 1 << " : ";
                cin >> m2[i][j];
        }
    }
    cout <<endl<< "Enter the " << row * col << " elements of third matrix : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
                cout << "row " << i + 1 << " column "<< j + 1 << " : ";
                cin >> m3[i][j];
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
                sum[i][j] = m1[i][j] + m2[i][j]+ m3[i][j];
        }
    }

    cout <<endl<< "The first matrix is : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m1[i][j] << "  ";
        }
        cout << endl;
    }

    cout <<endl<< "The second matrix is : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m2[i][j] << "  ";
        }
        cout << endl;
    }
cout <<endl<< "The third matrix is : "<<endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m3[i][j] << "  ";
        }
        cout << endl;
    }


    cout <<endl<< "The Sum matrix is : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << sum[i][j] << "  ";
        }

        cout << endl;
    }

    cout << "\n\n";

    return 0;
}
