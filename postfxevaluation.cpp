#include <iostream>
#include<math.h>
using namespace std;


//Stack in object oriented approach

class MyStack
{
    int *Stack=new int[5];
    int top=0,maxSize=5;
public:
    bool isEmpty()
    {
        if(top==0)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if(top==maxSize)
        {
            return true;
        }
        return false;
    }
    void push(int value)
    {
        if(isFull())
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            Stack[top]=value;
            top++;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            top--;
        }
    }
    int getTopValue()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else
        {
            return Stack[top-1];

        }
    }
    void print()
    {
        for(int i=top-1;i>=0;i--)
        {
            cout<<Stack[i]<<endl;
        }
    }
    void resize(int size)
    {
        int *tempStack=new int[maxSize+size];
        for(int i=0;i<maxSize;i++)
        {
            tempStack[i]=Stack[i];
        }
        delete[] Stack;
        Stack=new int[size+maxSize];
        maxSize+=size;
        Stack=tempStack;
    }
};

//Scan the expression from left to right.
//If it is any operand in the expression, then push the operand in the stack.
//If it is any operator in the expression, then pop the corresponding operands from the stack.
    //Evaluate the expression and push it in the stack.
//When we finish with the scanning of the expression, the final value remains in the stack.

int main()
{
    //string exp="75+";
    //string exp="52-4/2*";
    string exp="853--4+";
    MyStack ms;
    int a,b;
    for(int i=0;i<exp.size();i++)
    {
        if(exp[i]>='0' && exp[i]<='9')
        {
            ms.push(exp[i]-48);
        }
        else
        {
            b=ms.getTopValue();
            ms.pop();
            a=ms.getTopValue();
            ms.pop();
            if(exp[i]=='+')
            {
                ms.push(a+b);
            }
            else if(exp[i]=='-')
            {
                ms.push(a-b);
            }
            else if(exp[i]=='*')
            {
                ms.push(a*b);
            }
            else if(exp[i]=='/')
            {
                ms.push(a/b);
            }
            else if(exp[i]=='%')
            {
                ms.push(a%b);
            }
            else if(exp[i]=='^')
            {
                ms.push(pow(a,b));
            }
        }
    }

    cout<<"Postfix Expression: "<<exp<<endl;
    cout<<"Evaluated result: "<<ms.getTopValue()<<endl;
    return 0;
}

