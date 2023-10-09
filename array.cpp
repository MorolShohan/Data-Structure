#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {}; //1

    cout<<"Enter 5 elements\n";   //2
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    int num, maxsize=5;  //3

    cout<<"Enter index to be deleted\n";  //4
    cin>>num;

    if(num<0 || num>=maxsize)  //5
    {
        cout<<"Invalid\n";
    }
    else
    {
        arr[num]={};
    }

    cout<<"Array is:\n";  //6
    for(int i=0;i<5;i++)
    {
        if(arr[i]!='\0')
            cout<<arr[i]<<" ";
    }
}
