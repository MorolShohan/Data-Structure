#include <iostream>
#define soa 7
using namespace std;

void inputArray(int arr[])
{
    cout<<"Input : ";
    for(int i = 0; i<soa; i++)
    {
        cin>>arr[i];
    }
}

void printArray(int arr[], int soa)
{
    for(int i = 0; i<soa; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void insertionSort(int arr[],int soa)
{
   int i, key, j;
    for (i = 1; i < soa; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[],int soa)
{
     int i, j;
     for (i = 0; i <soa-1; i++)
     for (j = 0; j < soa-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

void selectionSort(int arr[])
{
    for(int starting_index = 0; starting_index<soa-1; starting_index++)
    {
        int mini_index = starting_index;

        for(int current_index = starting_index+1; current_index<soa; current_index++)
        {
            if(arr[current_index] < arr[mini_index])
            {
                mini_index = current_index;
            }
        }
        int temp = arr[starting_index];
        arr[starting_index] = arr[mini_index];
        arr[mini_index] = temp;

        cout<<"Step "<<starting_index<<": ";
        printArray(arr);
    }
}

int main()
{
   int arr[soa];
//----------------------------
   inputArray(arr);
   selectionSort(arr,soa);

   cout<<"Output: ";
   printArray(arr,soa);

//-----------------------------
   inputArray(arr);
   insertionSort(arr,soa);

   cout<<"Output: ";
   printArray(arr,soa);

//-----------------------------
   inputArray(arr);
   bubbleSort(arr,soa);

   cout<<"Output: ";
   printArray(arr);
}
