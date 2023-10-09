#include<iostream>
using namespace std;

int A[2][3];
int Insert()
{
    for(int row=0; row<2; row++)
   {
    for(int col=0; col<3; col++)
        {
            cout<<"A["<<row<<"]["<<col<<"] = ";
            cin >> A[row][col];
        }
    }
}

void Print(){
for(int row=0; row<2; row++)
    {
    for(int col=0; col<3; col++)
        {
            if(A[row][col]% 2==0)
            {
            cout<<A[row][col]<<" ";
            }
        }
cout<<endl;
    }
}

int main()
{
cout<<"Enter row and column's value\n"<<endl;
Insert();
cout<<"\nThe Even Elements of row is"<<endl;
Print();
return 0;
}

