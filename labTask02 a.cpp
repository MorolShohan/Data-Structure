//Solve05
#include <iostream>
using namespace std;

int countarr(int arr[], int a, int b)
{
    int result = 0;
    for (int i=0; i<a; i++){
    if (b == arr[i]){
        result++;
        }
    }
    return result;
}

int main()
{
    int m;
    int n = 10;

    int givenarr[n];
    cout << "Please Enter Ten Elements in the Array: "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin >> givenarr[i];
    }
    int a = sizeof(givenarr)/sizeof(givenarr[0]);

    cout<<endl<<"Array_1= {";
    for (int i=0; i < a; i++){
    cout<<givenarr[i]<<",";

}cout<<"}";

    cout<<endl;
    cout<<endl;

    for(m = 0; m < n; m++){
    int x;
    cout<<"Input a number: ";
    cin>>x;
    cout<<endl<<x<<" occurs = "<<countarr(givenarr, a, x)<<" times"<<endl;
    cout<<endl;

    }
    cout<<endl;
    return 0;

}
