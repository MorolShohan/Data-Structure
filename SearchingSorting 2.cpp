#include <iostream>
#define soa 10
using namespace std;

class Product
{
	string pId;
	string pName;
	float price;

	public:
	
	void setProductId(string pId){
		this->pId = pId;
	}
	void setProductName(string pName){
		this->pName = pName;
	}
	void setPrice(float price){
		this->price = price;
	}
	string getProductId(){return pId;}
	string getProductName(){return pName;}
	float getPrice(){return price;}
};

void printArray(Product products[])
{
	cout<<endl<<"### Printing array elements ###"<<endl;
	
	//complete this method
   
    cout<<endl;
}

void insertionSort(Product products[])
{
	//complete this method by sorting the array by the value of price.
}

int linearSearch(Product products[], string pId)
{
	int position = -1;
	//complete this method by searching a pId from the array.

	return position;
}

void inputArray(Product products[])
{
	for(int i=0; i<soa; i++)
	{
		string pId;
		string pName;
		float price;
		cout<<"Enter the Product ID for node no {"<<i<<"} : ";
		cin>>pId;
		cout<<"Enter the Product Name for node no {"<<i<<"} : ";
		cin>>pName;
		cout<<"Enter the Product Price for node no {"<<i<<"} : ";
		cin>>price;


		//complete creating the array of Products
	}
}

int main()
{
	Product products[soa];

	inputArray(products);
	printArray(products);
	
	insertionSort(products);
	printArray(products);

	string id;
	cout<<"Enter a Product Id to search : ";
	cin>>id;
	int position = linearSearch(products, id);

	if(position == -1)
	{
		cout<<number<<" Does NOT Exists"<<endl;
	}
	else
	{
		cout<<number<<" Exists in Index ["<<position<<"]."<<endl;
	}
	return 0;
}