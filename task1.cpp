#include <iostream>
using namespace std;

int count_arr (int arr[], int n, int x)
{
    int result = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          result++;
    return result;
}

int main()
{
    int nums[] = {5, 7, 8, 8, 5, 2, 7, 7,4,6};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: "<<endl;
    for (int i=0; i < n; i++)
    cout << nums[i] <<" ";
    int x = 8;
    cout <<"\nNumber of occurrences of 8 is : " << count_arr(nums, n, x);
    return 0;
    }
