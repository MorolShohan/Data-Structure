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

void selectionSort(int arr[],int n)
{
   int minIndex;
   for(int i=0;i<n-1;i++)
   {
       minIndex=i;
       for(int j=i;j<n;j++)
       {
           if(arr[j]<arr[minIndex])
           {
               minIndex=j;
               printArray(arr,n);
           }
       }
       int temp=arr[i];
       arr[i]=arr[minIndex];
       arr[minIndex]=temp;
       printArray(arr,n);
       cout<<"=========="<<endl;
   }
}

int main()
{
    int arr[]={9,7,3,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array"<<endl;
    printArray(arr,size);

    selectionSort(arr,size);

    cout<<"Sorted array"<<endl;
    printArray(arr,size);
    return 0;
}
