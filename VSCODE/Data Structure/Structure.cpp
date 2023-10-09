#include<iostream>
#include<string>
using namespace std;
struct person
{
    public :

    string name[50];
    int age;
    float sallery;

    void printdetails()
    {
        cout<<name;
        cout<<sallery;
    }
};

int main()
{
    struct person p1;
    p1.age = 20;
    p1.sallery = 5000;
    p1.printdetails();
}