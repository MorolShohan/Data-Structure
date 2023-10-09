#include <iostream>
using namespace std;

int main( )
{
	//declare necessary variables and objects
	bool repeat = true;
	while(repeat==true)
	{
		cout<<"What do you want?"<<endl<<endl;
		cout<<"1. Push an Element"<<endl;
		cout<<"2. Pop an Element"<<endl;
		cout<<"3. Get the top Element"<<endl;
		cout<<"4. Print the stack"<<endl;
		cout<<"5. Evaluate a Postfix Expression"<<endl;
		cout<<"6. Exit"<<endl;

		int choice;
		cin>>choice;

		switch(choice)
		{
			case 1:

				//push();
				break;

			case 2:

				//pop();
				break;

			case 3:

				//getTopElement();
				break;

			case 4:

				//print();
				break;

			case 5:

				//evaluateExpression();
				break;

			case 6:

				repeat = false;
				cout<<"You have choose to Exit...."<<endl;
				break;

			default:

				cout<<"Invalid Choice..."<<endl;
				break;
		}
	}
}
