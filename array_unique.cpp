//Solve03
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please Enter the size of Array: ";
    cin >> n;
    int arr1[n],arr2[n];
    int a = 0;
    cout << "Please Enter Elements In The Array: "<<endl;

    for(int i = 0;i<n;i++)
    {
        cin >> arr1[i];
    }


    cout<<endl<<"Array_1= {";
    for (int i=0; i < n; i++){
    cout<<arr1[i]<<",";
    }cout<<"}"<<endl<<endl;



    for(int j =0;j<n;j++)
    {
        int count=0;

        for(int m = j+1;m<n;m++)
        {
            if(arr1[j]!=arr1[m])
            {
                count++;
            }
        }

        if(count==(j-n-1))
        {
            arr2[a]=arr1[j];
            a++;
        }
    }



    if(n!=a)
    {
        for(int d = 0;d<a;d++)
        {
            cout << arr2[d] << " ";
        }
    }
    else
    {
        cout<<"\nArray already unique!"<<endl;
    }
}
