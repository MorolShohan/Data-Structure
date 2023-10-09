#include <iostream>
using namespace std;
struct Product
{
    int id;
    char name;
    float price;

 price(string n,int i,float p)
    {
        id=i;
        name=n;
        price=p;
    }
    void printinfo()
    {
        cout<<"Id:"<<id<<"\nName:"<<name<<"\nprice:"<<price<<endl;
    }


};
int main()
{
    Product produscts [5];
    struct product p1={1,"monitor"10,000};
    struct product p2={2,"cpu"7,000};
    struct product p3={3,"mouse"300};
    struct product p4={4,"keybord"800};
    struct product p5={5,"ram"3,500};
    for(int i=0;i<5;i++)
    {
        Product(i).printinfo();
    }

}
