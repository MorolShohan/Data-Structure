#include <iostream>
using namespace std;

int main(){

    int tmp = 0;
    int arr[10];
    int min = 0;

    int range = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter 10 numbers: "<<endl;

    for (int i = 0; i < 10 ; ++i)
        {
            cin >> arr[i];
    }

    cout << "The numbers are: ";

    for (int n = 0; n < 10; ++n) {

            cout << arr[n] << "  ";
    }


    cout<<endl;
    cout<< "---------------------------------------------------" <<endl;

    for(int i=0; i<range-1; i++){

            min = i;
    for(int j=i+1; j<range; j++){

            if(arr[j] < arr[min]){
                min = j;
            }
    }

    tmp = arr[min];
    arr[min] = arr[i];
    arr[i] = tmp;

    }

    cout<<"Selection-Sort : ";

    for(int i=0; i<10; i++){

        cout<<arr[i]<<"  ";
    }


    cout<<endl;
    return 0;
}
