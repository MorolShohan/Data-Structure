#include <iostream>
using namespace std;

int main()
{
    int arr1[3][3];
    cout<<"Input your 1st arrays: "<<endl;
    cin>>arr1[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr1[i][j];
        }
    }


    int arr2[3][3];
    cout<<"Input your 2nd arrays: "<<endl;
    cin>>arr2[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr2[i][j];
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr1[i][j]<<"  ";
        }
         cout<<endl;
    }



    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr2[i][j]<<"  ";
        }
        cout<<endl;
    }

    int arr3[3][3];


    for(int i=0;i<3; i++)
{
    for(int j=0; j<3; j++)
        {
            arr3[i][j]= arr1[i][j]+arr2[i][j];
        }
}



for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr3[i][j]<<"  ";
        }
        cout<<endl;
    }


    return 0;
}
