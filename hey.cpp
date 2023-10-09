#include <iostream>
using namespace std;
#define MAX 10
//variable declaration
int st[MAX];
int top = -1;
//function to push element
void push(int value)
{
if(top<=MAX)
{
top++;
st[top]=value;
}
}
//function to pop element
void pop()
{
if(top>=0)
{
cout<<st[top]<<" "<<endl;
top--;
}
}
//function to display the stack
void display()
{
if(top>=0)
{
for(int i=top; i>=0; i--)
cout<<st[i]<<endl;
}
}
int main()
{
//function calling
push(1);
push(2);
push(3);

cout<<"The stack is: "<<endl;
display();
}

