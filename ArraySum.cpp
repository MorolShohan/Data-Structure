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

    float sum = 0;
    float avg;

    for(int i=0; i<soa; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum/soa;

    cout<<"The summation is: "<<sum<<endl;
    cout<<"The average is: "<<avg<<endl;

}
