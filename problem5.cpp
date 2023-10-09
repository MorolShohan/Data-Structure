#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n,i,m=0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
        cout << "Factorial of " << n << " = " << factorial(n);
        else
        {
            cout<<"Error! Not a prime number.";
        }

    return 0;
}

int factorial(int n)
{
    if(n>1)
        return n * factorial(n - 1);
    else
        return 1;
}
