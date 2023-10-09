#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"array is :"<<arr[i]<<"\n";
    }

    cout<<endl;
}

void addelement(int arr[], int n, int value)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=value;
            break;
        }
    }
}

void deleteelement(int arr[],int n)
{
    for(int i=0; i<n;i++)
    {
        (arr[i]=arr[i+1]);

    }
}
int main()
{
    //int numbers[5];
    //numbers[0]=2;
    //numbers[1]=4;
    //numbers[2]=6;
    //numbers[3]=8;
    //numbers[4]=10;
    //numbers[3]=20;
    //cout<<numbers[3];

    int numbers[5]={2,4,6};

    //printarray(numbers,5);
    int size=sizeof(numbers)/sizeof(numbers[2]);
    //cout<<size;
    addelement(numbers,size,3);
    addelement(numbers,size,8);
    printarray(numbers,size);
    deleteelement(numbers,size);
    deleteelement(numbers,size);
    addelement(numbers,size,3);
    printarray(numbers,size);
     deleteelement(numbers,size);
     printarray(numbers,size);


    return(0);
}
