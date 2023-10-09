#include<iostream>
using namespace std;

int main()
{
    int row,column;
    cout<<"enter row value: ";
    cin>>row;
    cout<<"enter column value: ";
    cin>>column;

    int total = 0;
    cout<<"Enter the array value:"<<endl;
    int arr[row][column];
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            if(i%2!=0 || j%2==0)
            {
                total+=arr[i][j];
            }
        }
    }

    cout<<"total value all odd row and even column = "<<total;

}

