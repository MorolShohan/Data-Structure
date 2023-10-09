#include<iostream>
using namespace std;

int main()

{

      int days;
      int Rent_amount;
      char carNo[10]; // chracter sting
      char cust_name[20];  // chracter string

char model;  // to be used for car model selection choice


      int calc_rent(char, int); // Rent Amount calculation Function

      cout<<"Please provide cumstomer Namet";
      cin>>cust_name;
      cout<<"nPlease provide Car Model"<<endl;
      cout<<"tEnter 'A' for Model 2009.nt Eenter 'B' for Model 2010nt Enter 'C' for Model 2011n";
      cin>>model;

      cout<<"Please enter car Number = t";
      cin>>carNo;
      cout<<"Please enter Number of days = t";
      cin >> days;


      // Switch structure for options selection
      switch(model)
      {
           case 'A':
           case 'a':
                      cout<<"nntCustomer Name:" <<cust_name;
                      cout<<"ntCar Model:2009";
                      cout<<"ntCar No:"<<carNo;
                      cout<<"ntNumber of days:"<<days;
                      Rent_amount = calc_rent(model, days);
                      cout << "ntYour Rental Amaount is:"<<Rent_amount<< endl;
           break;

           case 'B':
           case 'b':
                      cout<<"nntCustomer Name:" <<cust_name;
                      cout<<"ntCar Model:2010";
                      cout<<"ntCar No:"<<carNo;
                      cout<<"ntNumber of days:"<<days;
                      Rent_amount = calc_rent(model, days);
                      cout << "ntYour Rental Amaount is:"<<Rent_amount<< endl;
           break;

           case 'C':
           case 'c':
                      cout<<"nntCustomer Name:" <<cust_name;
                      cout<<"ntCar Model:2011";
                      cout<<"ntCar No:"<<carNo;
                      cout<<"ntNumber of days:"<<days;
                      Rent_amount = calc_rent(model, days);
                      cout << "ntYour Rental Amaount is:"<<Rent_amount<< endl;
           break;

           default:
                   cout<<"Please Enter Correct Model Name using A to C n";
           }

      system("pause"); // causes the prompt to pause
      }

int calc_rent(char model, int days) // Rent Calculation Function
{
    if(model == 'A' || model == 'a')
    return (5000 * days);

    else if(model == 'B' || model == 'b')
    return (8000 * days);

    else if(model == 'C' || model == 'c')
    return (10000 * days);
    }
