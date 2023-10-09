#include<iostream>
#include<cstring>
using namespace std;
struct product
{
    int id;
    string name;
    float price;
    void printinfo()
    {
        cout<<"id :"<<id<<"\nName:"<<name<<"\nprice: "<<price<<endl;
    }

product getExpensiveProduct()
{
     int n, expensive;
   int num[5];
    cout<<"Enter number of elements you want to enter: ";
   cin>>n;


   for(int i = 0; i < n; i++) {
      cout<<"Enter price of product "<<(i+1)<< ": ";
      cin>>num[i];
   }
   expensive = num[0];
   for(int i=1;i<n;i++)
   {


      if(expensive < num[i])
         expensive = num[i];
   }
   cout<<"expensive product in array is: "<<expensive;
}

int main()
{
    struct product p1;
    int p1[5];
    for(i=0;i<5<i++)
    {
        printinfo;
    }

    *p=&getExpensiveProduct();
    p.printinfo;

}

};




