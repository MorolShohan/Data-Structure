#include<iostream>
using namespace std;

class MyQueue
{
    string Queue[5];
    int front=-1;
    int rear=-1;
    int maxSize=10;
public :
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
            return true;
        else return false;
    }

    bool isFull()
    {
        if(rear == maxSize-1)
            return true;
        else return false;
    }

    void enQueue(string value)
    {
        if(isFull())
        {
            cout<<"Queue is full :"<<endl;
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
        else if(front== rear && front !=-1)
        {
            front=rear=-1;

        }
        else
        {
            front++;
        }
    }

void display()
{
    if(isEmpty())
    {
        cout<<"Queue is empty \n";
    }
    else{
        for(int i=front;i<=rear;i++)
        {
             cout<<Queue[i]<<" "<<endl;
        }
    }
}

void showfront()
{
    if(isEmpty())
    {
        cout<<"Queue is empty\n";
    }

    else
    {
        cout<<"Front is : "<<Queue[front];
    }
}



};


int main()
{

    string exp="7-5*(12/4)*2";
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
            while(mq.showfront()!='(')
            {
                output+=mq.showfront();
                mq.deQueue();
            }
            mq.deQueue();
        }
        else
        {
            while(precedanceCheck(exp[i])<=precedanceCheck(ms.getTopValue()))
            {
                output+=ms.getTopValue();
                mq.deQueue();
            }
            mq.deQueue(exp[i]);
        }
    }

    while(!mq.isEmpty())
    {
        output+=mq.showfront();
        mq.deQueue();
    }

    cout<<"Infix Expression: "<<exp<<endl;
    cout<<"Postfix Expression: "<<output<<endl;
    return 0;
}
