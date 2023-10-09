#include<iostream>
using namespace std;
int main(void)
{
    char question[]="Please, enter first name: ";
    char Greeting[] = "Hello";
    char FirstName[80];
    cout<<question;
    cin>>FirstName;
    cout<<Greeting<<" , "<<FirstName<<" ! ";
}
