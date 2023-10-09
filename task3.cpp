#include <bits/stdc++.h>
using namespace std;
#define N 5

void transpose(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
}


int main()
{
    int A[N][N] = { {1, 1, 1, 1, 5},
                    {2, 2, 2, 2, 5},
                    {3, 3, 3, 3, 6},
                    {4, 4, 4, 4, 8}};

    int B[N][N], i, j;

    transpose(A, B);

    cout <<"Result matrix is \n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           cout <<" "<< B[i][j];
        cout <<"\n";
    }

    return 0;
}
