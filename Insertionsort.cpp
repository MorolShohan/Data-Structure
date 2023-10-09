#include <iostream>
using namespace std;

int main()
{
    int i, key, j;
    int arr[10] ;
    int range = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 10 numbers: "<<endl;

    for (int i = 0; i < 10 ; ++i) {

            cin >> arr[i];
        }

        cout << "The numbers are: ";

        for (int n = 0; n < 10; ++n){

                cout << arr[n] << "  ";
        }


        cout<<endl;
        cout<< "---------------------------------------------------" <<endl;


        for (i = 1; i < range; i++){

                key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        }

        cout<<"Insertion-Sort : ";

        for (i = 0; i < range; i++){

                cout << arr[i] << "  ";
        }

        cout << endl;
        return 0;
}
