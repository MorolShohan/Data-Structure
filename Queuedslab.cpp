#include<iostream>
using namespace std;

class MyQueue
{
    string Queue[5];
    int front=-1;
    int rear=-1;
    int maxSize=5;
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

    void Messages()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<" "<<endl;
        }
        cout<<"==========="<<endl;
    }

    //void printQuestions()




};


int main()
{
    MyQueue mq;
    mq.enQueue("I am having problem with my device.");
    mq.enQueue("Is customer care booth open on next Sunday?");
    mq.enQueue("Where can I get the premium packages?");
    mq.enQueue("Summer package for the corporate staff was excellent.");
    mq.enQueue("When will I get my bill adjustment?");


          mq.Messages();



    return 0;
}
