#include <iostream>
#define soa 10
using namespace std;

class Account
{
	int accountNumber;
	float balance;

	public:

	void setAccountNumber(int accountNumber){
		this->accountNumber = accountNumber;
	}
	void setBalance(float balance){
		this->balance = balance;
	}
	int getAccountNumber(){return accountNumber;}
	float getBalance(){return balance;}
};

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void swapf(float *xp, float *yp)
{
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSortAN(int arracNo[], int n, float arrBal[])
{
    int i, j;
    for (i = 0; i < n-1; i++)

    for (j = 0; j < n-i-1; j++)
        if (arracNo[j] > arracNo[j+1]){
            swap(&arracNo[j], &arracNo[j+1]);
            swapf(&arrBal[j], &arrBal[j+1]);
        }
}

void bubbleSortB(float arrBal[], int n, int arracNo[])
{
    int i, j;
    for (i = 0; i < n-1; i++)

    for (j = 0; j < n-i-1; j++)
        if (arrBal[j] > arrBal[j+1]){
            swapf(&arrBal[j], &arrBal[j+1]);
            swap(&arracNo[j], &arracNo[j+1]);
        }
}

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;


        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;


        else
            r = m - 1;
    }


    return -1;
}

void printarray(int arracNo[], int n, float arrBal[]){

    for(int i=0; i<n; i++)
    {
        cout<<"Account No: "<<arracNo[i]<<"   ";
        cout<<"Account Balance: "<<arrBal[i]<<endl;
    }

}



int main()
{
	Account accounts[soa];

	for(int i=0; i<soa; i++)
	{
		int an;
		float b;

		cout<<"Enter the Account Number: ";
		cin>>an;
		cout<<"Enter the Balance: ";
		cin>>b;

		accounts[i].setAccountNumber(an);
		accounts[i].setBalance(b);
	}



    int arracNo[soa];
    float arrBal[soa];
    for(int i=0; i<soa; i++){
        arracNo[i] = accounts[i].getAccountNumber();
        arrBal[i] = accounts[i].getBalance();
    }

    int n = sizeof(arracNo)/sizeof(arracNo[0]);

    printarray(arracNo, n, arrBal);

    cout<<endl;
    cout<<endl;


    bubbleSortAN(arracNo, n, arrBal);

    printarray(arracNo, n, arrBal);

    cout<<endl;
    cout<<endl;

    bubbleSortB(arrBal, n, arracNo);

    printarray(arracNo, n, arrBal);

    cout<<endl;
    cout<<endl;



	int number;
	cout<<"Enter an Account Number to search : ";
	cin>>number;

	int result = binarySearch(arracNo, 0, n - 1, number);
    if(result == -1){
        cout << "Element is not present in array";
    }
    else{
        cout << "Element is present at index " << result;
    }


	return 0;
}
