#include <iostream>
#define soq 10
#define invalid -9999999

using namespace std;


class MyQueue
{
    int Queue[soq];
    int Front, Rear;

    public:

    MyQueue()
    {
        Front = -1;
        Rear = -1;
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

    bool isFull()
    {
        if(Rear == soq-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool enQueue(int element)
    {
        if(isFull())
        {
            return false;
        }
        else if(isEmpty())
        {
            Front = 0;
            Rear = 0;
            Queue[Rear] = element;
            return true;
        }
        else
        {
            Rear++;
            Queue[Rear] = element;
            return true;
        }
    }
     bool deQueue()
     {
         if(isEmpty())
         {
             return false;
         }
         else if(Front == Rear)
         {
             Front = -1;
             Rear = -1;
             return true;
         }
         else
         {
             Front++;
             return true;
         }
     }

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

     void show()
     {
         if(isEmpty())
         {
             cout<<"Queue is Empty. Nothing to Print."<<endl;
         }
         else
         {
             for(int i = Front; i<=Rear; i++)
             {
                 cout<<Queue[i]<<"\t";
             }
         }
         cout<<endl;
     }
};

int main()
{
    MyQueue mq;

    bool repeat = true;
    mq.enQueue(10);
    mq.enQueue(7);
    mq.enQueue(5);
    mq.enQueue(12);
    mq.enQueue(100);
    mq.enQueue(50);
    mq.deQueue();
    mq.deQueue();
    mq.show();
    cout<<"The front element is : "<<endl;
    mq.checkFrontElement();
    return 0;


}
