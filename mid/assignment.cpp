#include <iostream>
#include<math.h>

using namespace std;

class MyQueue
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
    string exp="5-1*9-(21/3)*5";
    string output;
    MyQueue mq;
    for(int i=0;i<exp.size();i++)
    {
        if((exp[i]>='0' && exp[i]<='9') || (exp[i]>='a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='Z'))
        {
            output+=exp[i];
        }
        else if(exp[i]=='(')
        {
            mq.enQueue(exp[i]);
        }
        else if(exp[i]==')')
        {
            while(mq.getTopValue()!='(')
            {
                output+=mq.getTopValue();
                mq.deQueue();
            }
            mq.deQueue();
        }
        else
        {
            while(precedanceCheck(exp[i])<=precedanceCheck(mq.getTopValue()))
            {
                output+=mq.getTopValue();
                mq.deQueue();
            }
            mq.enQueue(exp[i]);
        }
    }

    while(!mq.isEmpty())
    {
        output+=mq.getTopValue();
        mq.deQueue();
    }

    cout<<"Infix Expression: "<<exp<<endl;
    cout<<"Postfix Expression: "<<output<<endl;


    int a,b;
    for(int i=0;i<exp.size();i++)
    {
        if(exp[i]>='0' && exp[i]<='9')
        {
            mq.enQueue(exp[i]-48);
        }
        else
        {
            b=mq.getTopValue();
            mq.deQueue();
            a=mq.getTopValue();
            mq.deQueue();
            if(exp[i]=='+')
            {
                mq.enQueue(a+b);
            }
            else if(exp[i]=='-')
            {
                mq.enQueue(a-b);
            }
            else if(exp[i]=='*')
            {
                mq.enQueue(a*b);
            }
            else if(exp[i]=='/')
            {
                mq.enQueue(a/b);
            }
            else if(exp[i]=='%')
            {
                mq.enQueue(a%b);
            }
            else if(exp[i]=='^')
            {
                mq.enQueue(pow(a,b));
            }
        }
    }

    cout<<"Postfix Expression: "<<exp<<endl;
    cout<<"Evaluated result: "<<mq.getTopValue()<<endl;

    return 0;
}
