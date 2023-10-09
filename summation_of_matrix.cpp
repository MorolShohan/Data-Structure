#include<iostream>
using namespace std;
int main()
{

    int row_size,col_size;
    cout<<"Enter the row Size Of the Matrix:";
    cin>>row_size;
    cout<<"Enter the columns Size Of the Matrix:";
    cin>>col_size;

    int matrix[row_size][col_size];


    int i,j;
    cout<<"Enter the Matrix Element:\n";
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int sum=0;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            sum+=matrix[i][j];
        }
    }
    cout<<"Sum of the Given Matrix Elements is: "<<sum;
}

