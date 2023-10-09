#include <iostream>

using namespace std;

class MyStack
{
    int stack[5],top=0,maxSize=5;
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
            stack[top]=value;
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

    int getTopElement()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else
        {
            return stack[top-1];
        }
    }
    void print()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            for(int i=top-1;i>=0;i--)
            {
                cout<<stack[i]<<endl;
            }
        }

    }
};

int main()
{
    MyStack ms;
    ms.push(7);
    ms.push(15);
    ms.push(10);
    ms.push(5);
    ms.push(9);
    //ms.push(100);
    ms.print();
    cout<<"===="<<endl;
    ms.pop();
    ms.print();
    cout<<"===="<<endl;
    ms.pop();
    ms.print();
    cout<<"===="<<endl;
    cout<<"Top element:"<<ms.getTopElement()<<endl;
    return 0;
}
