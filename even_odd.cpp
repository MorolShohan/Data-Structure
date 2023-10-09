#include <iostream>
using namespace std;

int main() {
    int even_no = 0;
    int odd_no = 0;
    int number[10];

    cout << " give the values :-";

    for (int i = 0; i < 10; i++) {
        cin >> number[i];
        if (number[i] % 2 == 0) {
            even_no++;
        }
        else {
            odd_no++;
        }
    }
    cout << "even number :" << even_no << "\n";
    cout << "odd number :" << odd_no;

    return 0;
}