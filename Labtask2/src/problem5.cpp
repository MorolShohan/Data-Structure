#include <iostream>
using namespace std;

int count_occurrences(int arr[], int a, int b)
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
    int n = 5;
    int given_arr[10] = {8,4,6,1,6,9,6,1,9,8};
    int a = sizeof(given_arr)/sizeof(given_arr[0]);

    cout<<"Original array: ";
    for (int i=0; i < a; i++){
    cout<<given_arr[i] <<" ";
}

    cout<<endl;
    cout<<endl;

    for(m = 0; m < n; m++){
    int x;
    cout<<"Input a number: ";
    cin>>x;
    cout<<x<<"It has occured = "<<count_occurrences(given_arr, a, x)<<" times"<<endl;
    cout<<endl;

    }
    cout<<endl;
    return 0;

}
