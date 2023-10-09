#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int value)
{
    int first,last,middle;
    first=0;
    last=n-1;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(value==arr[middle])
        {
            return middle;
        }
        else if(value<arr[middle])
        {
            last=middle-1;
        }
        else if(value>arr[middle])
        {
            first=middle+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,3,5,8,10,11,35,40};
    int size=sizeof(arr)/sizeof(arr[0]);

    int result=binarySearch(arr,size,7);
    if(result>0)
    {
        cout<<"Item found at index: "<<result<<endl;
    }
    else
    {
        cout<<"Item not found"<<endl;
    }

    return 0;
}
