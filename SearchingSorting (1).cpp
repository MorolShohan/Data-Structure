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

	 for(int i = 0; i<soa; i++)
    {
        cout<<products[i].getProductId()<<"\t";
    }

    cout<<endl;
}

void bubbleSort(Product products[],int n)
{
	int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (products[j] > products[j+1])
            swap(&products[j], &products[j+1]);
}

int binarySearch(Product products[], int l, int r, int x)
{
	int position = -1;
	if (r >= l) {
        int mid = l + (r - l) / 2;

        if (products[mid] == x)
            return mid;

        if (products[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

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
		products[i].setProductId(pId);
		cout<<"Enter the Product Name for node no {"<<i<<"} : ";
		cin>>pName;
		products[i].setProductName(pName);
		cout<<"Enter the Product Price for node no {"<<i<<"} : ";
		cin>>price;
		products[i].setPrice(price);

	}
}

int main()
{
	Product products[soa];

	inputArray(products);
	printArray(products);

	bubbleSort(products);
	printArray(products);

	string id;
	cout<<"Enter a Product Id to search : ";
	cin>>id;
	int position = binarySearch(products, id);

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
