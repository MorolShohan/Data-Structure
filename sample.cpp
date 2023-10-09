#include <iostream>
using namespace std;

/*
return-type function-name(p1, p2, p3, .....)
{
    function-body;
}
*/

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    int res = a-b;
    return res;
}

int multiply(int a, int b)
{
    return a*b;
}

int divide(int a, int b)
{
    return a/b;
}

int main()
{
    /*
    for(int i = 0; i<5 ; i++)
    {
        cout<<"Hello: "<<i<<endl;
    }

    int c = 0;
    while(c<5)
    {
        cout<<"AIUB : "<<c<<endl;
        c++;
    }

    int cnt = 0;
    do
    {
         cout<<"Bye : "<<cnt<<endl;
         cnt++;
    }
    while(cnt<5);
    */

    int v1, v2, res;
    cout<<"Enter the 1st value: ";
    cin>>v1;
    cout<<"Enter the 2nd value: ";
    cin>>v2;

    res = add(v1,v2);
    cout<<"Summation is: "<<res<<endl;

    res = subtract(v1,v2);
    cout<<"Subtraction is: "<<res<<endl;

    res = multiply(v1,v2);
    cout<<"Multiplication is: "<<res<<endl;

    res = divide(v1,v2);
    cout<<"Division is: "<<res<<endl;
}
