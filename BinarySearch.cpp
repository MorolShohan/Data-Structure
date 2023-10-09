#include <iostream>
#define soa 10

using namespace std;


int binarySearch(int arr[], int element)
{
    int position = -1;
    int f_index = 0;
    int l_index = soa-1;

    while(f_index<=l_index)
    {
        int mid_index = (f_index+l_index)/2;
        int mid_element = arr[mid_index];

        if(element < mid_element)
        {
            l_index = mid_index - 1;
        }
        else if(element > mid_element)
        {
            f_index = mid_index + 1;
        }
        else
        {
            position = mid_index;
            break;
        }
    }
    return position;
}


int main()
{
    int arr[soa], element;

    cout<<"Enter the elements of a sorted array: ";
    for(int i=0; i<soa; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element to search: ";
    cin>>element;

    int position = binarySearch(arr, element);

    if(position == -1)
    {
        cout<<"The element "<<element<<" Does NOT Exists in the array"<<endl;
    }
    else
    {
        cout<<"The element "<<element<<" Exists in ["<<position<<"] index."<<endl;
    }
}
