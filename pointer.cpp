#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p =&x;
    int y = *p;

    cout<<"Address of integer variable x :"<< &x <<"\n";
    cout<<"Value stored in the memory area of x :"<< x <<"\n";
    cout<<"Address of interger pointer variable: "<< &p <<"\n";
    cout<<"Address stored in the area of pointer *p :"<< &x <<"\n";
    cout<<"Address of int variable y :"<< &y <<"\n";
    cout<<"Value pointed by the pointer *p: "<< *p <<"\n";
    cout<<"value stored in the memory area of variable y : "<< y <<"\n";
}
