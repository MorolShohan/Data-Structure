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

    int odd =0;

    for(int i=0; i<soa; i++)
    {
        if(arr[i] % 2 != 0)
        {
            odd++;
        }
    }

    cout<<"There are "<<odd<<" Odd numbers in the array"<<endl;
}

