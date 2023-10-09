#include <iostream>
#define soa 7
using namespace std;

void printArray(int arr[])
{
    for(int i = 0; i<soa; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void inputArray(int arr[])
{
    cout<<"Enter the array Elements: ";
    for(int i = 0; i<soa; i++)
    {
        cin>>arr[i];
    }
}

void selectionSort(int arr[])
{
    for(int start_index = 0; start_index<soa-1; start_index++)
    {
        int mini_index = start_index;

        for(int current_index = start_index+1; current_index<soa; current_index++)
        {
            if(arr[current_index]< arr[mini_index])
            {
                mini_index = current_index;
            }
        }
        int temp = arr[start_index];
        arr[start_index] = arr[mini_index];
        arr[mini_index] = temp;

        cout<<"Step "<<start_index<<":\t";
        printArray(arr);
    }
}

void insertionSort(int arr[])
{
	//complete this function
}

void bubbleSort(int arr[])
{
	//complete this function
}

int main()
{
    int arr[soa];

    //---------------------
    inputArray(arr);
    selectionSort(arr);

    cout<<"The sorted array is: ";
    printArray(arr);

    //--------------------------
    inputArray(arr);
    insertionSort(arr);

    cout<<"The sorted array is: ";
    printArray(arr);

    //---------------------------
    inputArray(arr);
    bubbleSort(arr);

    cout<<"The sorted array is: ";
    printArray(arr);
}
