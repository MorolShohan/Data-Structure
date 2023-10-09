#include <iostream>
using namespace std;

class AnQueue
{
    int string Queue[100];
    int front=-1;
    int rear=-1;
    int maxSize=100;

  public :
       void enQueue(string anElement)
    {
        if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
            queue[rear] = anElement;
        }
        else {
            rear++;
            queue[rear] = anElement;
        }
    }
 void printQueue()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<" ";
        }
        cout<<endl<<"==============="<<endl;
    }

    }
    void printQuestion()
      {
        for (int c = front; c <= rear; c++) {
                string tS = queue[c];
                for(int cC = 0; cC < tS.length(); cC++)
                {
                    if(tS[cC] == '?')
                    {

            cout << tS << endl;

                    }
                }
        }
    }

};

int main()
{
   Anqueue anQueue;
    cout << "INPUT YOUR QUESTIONS OR MESSEGES:";
    string questionsOrMesseges;
    for(int count = 0; count < 5; count++)
    {
    cin >> questionsOrMesseges;
    anQueue.enQueue(questionsOrMesseges);
    }
    anQueue.printQueue();
    anQueue.printQuestions();
}
