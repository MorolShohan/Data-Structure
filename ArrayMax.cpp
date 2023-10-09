#include <iostream>
#define soa 10
using namespace std;

int main()
{
    int arr[soa];

    cout<<"Enter the elements of the array: ";

    for(int i=0; i<soa; i++)
    {
        cin>>arr[i];
    }

    cout<<"The Array is: ";
    for(int i=0; i<soa; i++)
    {
        cout<<arr[i]<<"\t";
    }

    int maxi=-9999999;

    for(int i=0; i<soa; i++)
    {
        if(arr[i]> maxi)
        {
            maxi = arr[i];
        }
    }

    cout<<endl<<"The Maximum Element is: "<<maxi<<endl;
}
