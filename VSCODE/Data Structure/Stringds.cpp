#include<iostream>
using namespace std;
int main(void)
{
   char Question[]="please, enter your namee: ";
   char greetings[]="hello!";
   char name[80];
   cout<<Question;
   cin.get(name,80);
   cout<<greetings<< ","<<name<<"!"<<endl;
}
