#include<iostream>
using namespace std;
int main()
{
    int arr[10], i;
    cout<<"Input 10 integer numbers: ";
    for(i=0; i<10; i++)
    cin>>arr[i];

    cout<<"The Numbers from begin: ";

    for(i=0; i<10; i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"The numbers in Reverse: ";
    for(i=9; i>=0; i--)
    cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
