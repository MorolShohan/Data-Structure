#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr_1[20] = {10,20,30,40,50};
    int arr_2[20] = {1,2,3,4,5,6,7,8};
    int arr[20];

    int n=5, m=8, s=0;
    s = m+n;

    cout<<"Array 1= ";
    for(int i=0; i<n; i++){
        cout<<arr_1[i]<<" ";
    }
    cout<<endl<<"Array 2= ";
    for(int i=0; i<m; i++){
        cout<<arr_2[i]<<" ";
    }
    cout<<endl<<"Output: ";

    for(int i=0; i<n; i++){
        arr[i] = arr_1[i];
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<m; i++){
        arr[i+n] = arr_2[i];
        cout<<arr[i+n]<<" ";
    }

    getch();
}
