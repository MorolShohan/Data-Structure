#include<iostream>
using namespace std;

#define N 10

int main()
{
    int a[N], positive[N], negative[N], i, k1 = 0, k2 = 0;

    cout<<"Enter any integer number"<<endl;
    for(i = 0; i < N; i++)
        cin>>a[i];

    for(i = 0; i < N; i++)
    {
        if(a[i] >= 0)
            positive[k1++] = a[i];
        else
            negative[k2++] = a[i];
    }

    cout<<"positive numbers are"<<k1;
    for(i = 0; i < k1; i++)
        cout<<positive[i]<<endl;

    cout<<"negative are"<<k2<<endl;
    for(i = 0; i < k2; i++)
        cout<<negative[i];

    cout<<endl;
    return 0;
}
