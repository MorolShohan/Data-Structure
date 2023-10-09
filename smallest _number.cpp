#include <iostream>
#define soa 10
using namespace std;

int main()
{
    int arr[soa];
    cout<<"Enter the elements of the array : " ;
    for(int i=0; i<soa; i++)
    {
        cin>>arr[i];
    }


    int smallest=arr[0];
    for (int i=0; i<soa; i++)
    {
        if(arr[i] < smallest)
            {
	            smallest = arr[i];
            }
    }

cout<<"smallest number in the array is "<<smallest<<endl;

}

