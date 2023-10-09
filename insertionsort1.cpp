#include<iostream>
using namespace std;
int binarySearch(char arr[], char x,int n)
    {
        int l = 0 ;
        int r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;

        int res = -1000;

        if (x == (arr[m]))
            res = 0;
            if (res == 0)
                return m;

            if (x > (arr[m]))
                l = m + 1;
            else
                r = m - 1;
        }

        return -1;
    }

int main(){
int n;
int j;
char k;
char m;
cout<<"Enter the size of array"<<endl;
cin>>n;
char arr[n];
cout<<"Enter the value of array"<<endl;
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
    for (int i = 0; i < n; i++)
    {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
    std::cout << arr << "\n";
cout<<"Enter the Search value = ";
cin>>m;
    int result = binarySearch(arr, m,n);

        if (result == -1)
            cout << ("Element not present");
        else
            cout << ("Element found at index ") << result;

}
