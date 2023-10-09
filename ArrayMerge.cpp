#include <iostream>
#define soa1 5
#define soa2 4
using namespace std;

int main()
{
    int Arr1[soa1], Arr2[soa2];

    cout<<"Enter the elements of Arr1: ";

    for(int i=0; i<soa1; i++)
    {
        cin>>Arr1[i];
    }

    cout<<"Enter the elements of Arr2: ";

    for(int i=0; i<soa2; i++)
    {
        cin>>Arr2[i];
    }

    int soa3 = soa1 + soa2;

    int Arr3[soa3];

    for(int i=0; i<soa1; i++)
    {
        Arr3[i] = Arr1[i];
    }


    for(int i = soa1, j = 0; i<soa3 ; i++)
    {
        Arr3[i] = Arr2[j];
        j++;
    }

    cout<<"The Merged Array is: ";

    for(int i=0; i<soa3; i++)
    {
        cout<<Arr3[i]<<"\t";
    }

    cout<<endl;
}
