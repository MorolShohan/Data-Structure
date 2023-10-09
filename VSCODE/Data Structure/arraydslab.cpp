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

void deleteelementfromfirst(int arr[],int n)
{
    for(int i=0; i<n;i++)
    {
        (arr[i]=arr[i+1]);

    }
}

void deleteelementfromlast(int arr[],int n)
{
    for(int i=n-1;i>0;i--)
    {

            if(arr[i]==0)
            {
                continue;
            }


    else
        {
        arr[i]=0;
        break;
    }

    }

}

void deleteelement(int arr[],int n, int value)
{

    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            for(int j=i;j<n;i++)
            {

                arr[j]=arr[j+1];
            }
        }
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
    deleteelementfromfirst(numbers,size);
    printarray(numbers,size);
    deleteelementfromlast(numbers,size);
    printarray(numbers,size);
    return(0);
}
