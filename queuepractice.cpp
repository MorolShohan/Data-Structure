#include <iostream>

using namespace std;

class MyQueue
{
    int Queue[5],front=-1,rear=-1,maxSize=5;
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
    void enQueue(int value)
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
        else if(front== rear && front!=-1)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
    }


    bool isEmpty()
    {
        if(Front == -1 && Rear == -1)
        {
            return true;
        }
        else
        {
            return false;
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

  int checkFrontElement()
     {
         if(isEmpty())
         {
             return invalid;
         }
         else
         {
             return Queue[Front];
         }
     }
int main()
{
    MyQueue mq;
    mq.enQueue(10);
    mq.enQueue(7);
    mq.enQueue(5);
    mq.enQueue(12);
    mq.enQueue(100);
    //mq.enQueue(50);
    mq.print();
    mq.deQueue();
    mq.print();
    mq.deQueue();
    mq.print();
    mq.checkFrontElement();
    return 0;
}
