#include <iostream>
using namespace std;

int main()
{
  int a;
  int b;
  int c = 0;

  cout<< "Input: ";
  cin>> a;
  cout<<endl;

  c = a/2;

  for(b = 2; b <= c; b++)
  {
      if(a % b != 0)
      {
          cout<<"Prime Number."<<endl;
      }

      else
      {
          cout<<"Error! It is not a prime number."<<endl;
      }
  }

  return 0;
}

