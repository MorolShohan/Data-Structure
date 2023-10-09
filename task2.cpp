#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr1[] = { 1, 5, 4, 9, 7, 2 };
    int arr2[] = { 1, 7, 5, 4, 6, 12, 52 };

    int g1 = sizeof(arr1) / sizeof(arr1[0]);
    int g2 = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr1, arr1 + g1);
    sort(arr2, arr2 + g2);

    cout << "First Array: ";
    for (int i = 0; i < g1; i++)
        cout << arr1[i] << " ";
    cout << endl;

    cout << "Second Array: ";
    for (int i = 0; i < g2; i++)
        cout << arr2[i] << " ";
    cout << endl;

    // Initialise a vector
    // to store the common values
    // and an iterator
    // to traverse this vector
    vector<int> v(g1 + g2);
    vector<int>::iterator it, st;

    it = set_intersection(arr1, arr1 + g1,
                          arr2, arr2 + g2,
                          v.begin());

    cout << "\nCommon elements:\n";
    for (st = v.begin(); st != it; ++st)
        cout << *st << ", ";
    cout << '\n';

    return 0;
}
