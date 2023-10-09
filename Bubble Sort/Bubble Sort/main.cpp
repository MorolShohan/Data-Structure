#include <iostream>

using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                printArray(arr,n);
            }
        }
        cout<<"=========="<<endl;
    }
}

int main()
{
    int arr[]={9,7,3,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array"<<endl;
    printArray(arr,size);

    bubbleSort(arr,size);

    cout<<"Sorted array"<<endl;
    printArray(arr,size);
    return 0;
}
