#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please Enter the size of Array: ";
    cin >> n;
    int arr1[n],arr2[n];
    int a = 0;
    cout << "Please Enter Elements of first Array: "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin >> arr1[i];
    }
    for(int j =0;j<n;j++)
    {
        int count2=0;
        for(int k = j+1;k<n;k++)
        {
            if(arr1[j]!=arr1[k])
            {
                count2++;
            }
        }
        if(count2==(n-j-1))
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
        cout<<"Array's already unique"<<endl;
    }
}
