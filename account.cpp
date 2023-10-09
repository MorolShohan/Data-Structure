#include<iostream>
using namespace std;

class Account
{
public:
    string accountNumber;
    string accountHolderName;
    double balance;
    double interestrate;

    void setaccountNumber(string acc)
    {
        accountNumber = acc;
    }

    string getaccountNumber()
    {
        return accountNumber;
    }

    void setaccountHolderName(string name)
    {
        accountHolderName = name;
    }

    string getaccountHolderName()
    {
        return accountHolderName;
    }

    void setbalance(double bal)
    {
        balance = bal;
    }

    double getbalance()
    {
        return balance;
    }
    void setinterestrate(double rate)
    {
        interestrate = rate;
    }

    double getinterestrate()
    {
        return interestrate;
    }

    void checkPremium()
    {
        cout<<"ENTER INTEREST RATE!"<<endl;
    cin>>interestrate;
        if(interestrate > 7.6)
        {
            cout<<"premium account!!"<<endl;
        }
        else
        {
                cout<<"not premium account!!"<<endl;

        }
    }

};

int main()
{

    Account obj;

    obj.checkPremium();
}
