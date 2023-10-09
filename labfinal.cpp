#include <iostream>
#include<math.h>

using namespace std;

class AQueue
{
    char *Queue=new char[50];
    int front=-1,rear=-1,maxSize=50;
public :
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
            return true;
        else return false;
    }
    bool isFull()
    {
        if(rear==maxSize-1)
            return true;
        else return false;
    }
    void enQueue(char value)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
        }
        else if(isEmpty())
        {
            front=rear=0;
            Queue[rear]=value;
        }
        else
        {
            rear++;
            Queue[rear]=value;
        }
    }
    void deQueue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear && front!=-1)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
    }

    char getTopValue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return '\0';
        }
        else
        {
            return Queue[front];

        }
    }


    void print()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<" ";
        }
        cout<<endl<<"==============="<<endl;
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

    string exp="7-5*3-(12/4)*2";
    string output;
    AQueue ms;
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
