#include <iostream>
using namespace std;
int main()

{
    int arr[10] = { 12, 32, 43, 1, 54, 53, 64, 15, 3, 13 };
    int even_number = 0;
    int odd_number = 0;

    for (int i = 0; i < 10; i++) {

    if (arr[i]%2 != 0)
    odd_number++;
    else

    even_number++;
    }

    cout << "Number of even elements = " << even_number
    << "\nNumber of odd elements = " << odd_number;
}
