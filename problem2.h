#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[10];
    int i,size,odd=0,even=0;

    cout<<"Enter size of array";
    cin>>size>>endl;

    cout<<"\nEnter elements of the array\n";
    for(i=0; i<size; i++)
    {
        cout<<"Enter the element arr["<<i<<"] :";
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"\nTotal even numbers of an array :"<<even<<"\n";

    cout<<"Total odd numbers of an array : "<<odd;

    return 0;
}
