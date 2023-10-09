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

    int even =0;

    for(int i=0; i<soa; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
    }

    cout<<"There are "<<even<<" even numbers in the array"<<endl;
}
