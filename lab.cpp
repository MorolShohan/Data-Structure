#include <iostream>
using namespace std;

struct Product{
int id;
string name;
double price;
void printInfo()
{
cout<<"PRODUCT ID: "<<id<<'\n';cout<<"PRODUCT Name: "<<name<<'\n';cout<<"PRODUCT Price: "<<price<<'\n';
}
};

Product* getExpensiveProduct(Product* arr,int v){
Product* gg = new Product();
gg->id = 0;
gg->name = "";
gg->price = 0;
for(int i=0;i<v;i++){
if(gg->price<=arr[i].price){
*gg = arr[i];
}
}
return gg;
}


int main(){
  struct Product arr[5]= { { 101, "ASDF", 200 },{ 102, "DFGGC", 500 },{ 103, "DGDFB", 100 },{ 104, "DHGFH", 300 },{ 105, "ETEE", 400 }};

Product* gg = getExpensiveProduct(arr,5);
gg->printInfo();
   return 0;
}

