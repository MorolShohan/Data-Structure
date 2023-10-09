#include <iostream>

using namespace std;



class MyStack
{
    char *Stack=new char[50];
    int top=0,maxSize=50;
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
    void push(char value)
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
    char getTopValue()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return '\0';
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
        char *tempStack=new char[maxSize+size];
        for(int i=0;i<maxSize;i++)
        {
            tempStack[i]=Stack[i];
        }
        delete[] Stack;
        Stack=new char[size+maxSize];
        maxSize+=size;
        Stack=tempStack;
    }
};


int precedanceCheck(char c)
{
    if(c=='^')return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-')return 1;
    else return 0;

}

int main()
{
    //string exp="A/B-(C*D)/E";
    string exp="7-5*3-(12/4)*2";
    string output;
    MyStack ms;
    for(int i=0;i<exp.size();i++)
    {
        if((exp[i]>='0' && exp[i]<='9') || (exp[i]>='a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='Z'))
        {
            output+=exp[i];
        }
        else if(exp[i]=='(')
        {
            ms.push(exp[i]);
        }
        else if(exp[i]==')')
        {
            while(ms.getTopValue()!='(')
            {
                output+=ms.getTopValue();
                ms.pop();
            }
            ms.pop();
        }
        else
        {
            while(precedanceCheck(exp[i])<=precedanceCheck(ms.getTopValue()))
            {
                output+=ms.getTopValue();
                ms.pop();
            }
            ms.push(exp[i]);
        }
    }

    while(!ms.isEmpty())
    {
        output+=ms.getTopValue();
        ms.pop();
    }

    cout<<"Infix Expression: "<<exp<<endl;
    cout<<"Postfix Expression: "<<output<<endl;
    return 0;
}
