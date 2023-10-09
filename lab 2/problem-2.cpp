#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr_1[20] = {1,4,6,3,7,9};
    int arr_2[20] = {5,3,7,1,2,6};

    int n=6, m=6;
    bool flag=0;

    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if(arr_1[i]==arr_2[j]){
                flag=1;
                cout<<arr_1[i]<<" ";
            }
        }
    }
    if(flag==0){
        cout<<"No common element!";
    }

    getch();
}
