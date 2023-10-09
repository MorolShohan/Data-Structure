#include<iostream>
using namespace std;
int main()
{
    int numbers[5]={1,4,7,2,5};
int *p=numbers;
cout<<*(p+2)<<endl;
}
