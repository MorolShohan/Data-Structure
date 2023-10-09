#include<iostream>
using namespace std;
main()
{
   int arr[10], i;
    cout<<"Enter 10 Array : ";
    for(i=0; i<10; i++)
        cin>>arr[i];

    cout<<"\n The Original Array is: \n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";

    cout<<"\n The Reverse Array is: \n";
    for(i=(10-1); i>=0; i--)

        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;

    //problem 1 //
}


