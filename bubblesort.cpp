#include <iostream>
using namespace std;

int main()
{
    int tmp = 0;
    int arr[10];
     cout << "Enter 10 numbers: "<<endl;

    for (int i = 0; i < 10 ; ++i) {
        cin >> arr[i];
    }

    cout<<endl;
    cout << "The numbers are: ";

    for (int n = 0; n < 10; ++n) {
        cout << arr[n] << "  ";
    }

    cout<<endl;
    cout<< "----------------------------------------------" <<endl;

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[j] < arr[i]){

                    tmp = arr[j];
            arr[j] = arr[i];
            arr[i] =tmp;
            }
        }
    }

     cout<<"Bubble-Sort : ";

    for(int i=0; i<10; i++){
        cout<<arr[i]<<"  ";
    }


     cout<<endl;
     return 0;
}
