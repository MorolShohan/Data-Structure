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

void insertionSort(int arr[],int n)
{
   int val,j;
   for(int i=1;i<n;i++)
   {
       val=arr[i];
       j=i-1;
       while(j>=0 && arr[j]>val)
       {
           arr[j+1]=arr[j];
           j--;
           printArray(arr,n);
       }
       arr[j+1]=val;
       printArray(arr,n);
       cout<<"========="<<endl;

   }
}

int main()
{
    int arr[]={9,7,3,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array"<<endl;
    printArray(arr,size);

    insertionSort(arr,size);

    cout<<"Sorted array"<<endl;
    printArray(arr,size);
    return 0;
}
