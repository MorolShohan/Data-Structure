#include<iostream>
#include<stdio.h>

using namespace std;

struct mystruct{

     string name;
     int age;
     double height;
 };

int main()
{

    struct mystruct s1;
    struct mystruct s2;

    s1.age = 10;
    s2.age = 20;

    s1.name = "Shohan";

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;

    return 0;
}

