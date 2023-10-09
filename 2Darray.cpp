#include<iostream>
using namespace std;

void print2darray(int arr[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";

        }

        cout<<endl;
    }
}

int main()
{
    int members[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    print2darray(members);
    return 0;
}

