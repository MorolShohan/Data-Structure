#include <iostream>
#define soa 10
using namespace std;

int linearSearch(int arr[], int element)
{
    int position = -1;
    for(int i=0; i<soa; i++)
    {
        if(arr[i] == element)
        {
            position = i;
            break;
        }
    }
    return position;
}

int main()
{
    int arr[soa], element;

    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<soa; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element to search: ";
    cin>>element;

    int position = linearSearch(arr, element);

    if(position == -1)
    {
        cout<<"The element "<<element<<" Does NOT Exists in the array"<<endl;
    }
    else
    {
        cout<<"The element "<<element<<" Exists in ["<<position<<"] index."<<endl;
    }
}
