#include <iostream>
#include <string>
using namespace std;

class MyQueue
{
	int *queue;
	int *reverseQueue;
	int maxSize;
	int front;
	int rear;
	int reversedFront;
	int reversedRear;

	public:
		MyQueue() {}

	MyQueue(int size)
	{
		maxSize = size;
		queue = new int[maxSize];
		reverseQueue = new int[maxSize];
		front = -1;
		rear = -1;
		reversedFront = -1;
		reversedRear = -1;
	}

	bool isEmpty()
	{
		return front == -1 && rear == -1;
	}

	bool isFull()
	{
		return rear == maxSize - 1;
	}

	bool reversedQueueIsEmpty()
	{
		return reversedFront == -1 && reversedRear == -1;
	}

	void enQueue(int anElement)
	{
		if (rear == maxSize - 1)
		{

			cout << "The queue is full" << endl;

		else if (front == -1 && rear == -1)
		{
			front = 0;
			rear = 0;
			queue[rear] = anElement;
		}
		else
		{
			rear++;
			queue[rear] = anElement;
		}
	}

	void reversedEnQueue(int anElement)
	{
		if (reversedFront == maxSize - 1)
		{

			cout << "The queue is full" << endl;

		}
		else if (reversedFront == -1 && reversedRear == -1)
		{
			reversedFront = 0;
			reversedRear = 0;
			reverseQueue[reversedRear] = anElement;
		}
		else
		{
			reversedRear++;
			reverseQueue[reversedRear] = anElement;
		}
	}

	void reverseDeQueue()
	{
		if (reversedFront == -1 && reversedRear == -1)
		{

			cout << "The queue is empty" << endl;

		}
		else if (reversedFront == reversedRear && reversedFront != -1)
		{
			reversedFront = -1;
			reversedRear = -1;
		}
		else
			reversedFront++;

	}

	void deQueue()
	{
		for (int count = rear; count >= front; count--)
		{
			reversedEnQueue(queue[count]);
		}

		for (int count = front; count <= rear; count++)
		{
			queue[count] = reverseQueue[count];
		}

		while (!reversedQueueIsEmpty())
		{
			reverseDeQueue();
		}

		if (front == -1 && rear == -1)
		{

			cout << "The queue is empty!" << endl;

		}
		else if (front == rear && front != -1)
		{
			front = -1;
			rear = -1;
		}
		else
			front++;

		for (int count = rear; count >= front; count--)
		{
			reversedEnQueue(queue[count]);
		}

		for (int count = front; count <= rear; count++)
		{
			queue[count] = reverseQueue[count];
		}


		while (!reversedQueueIsEmpty())
		{
			reverseDeQueue();
		}
	}

	int topElement()
	{
		return queue[rear];
	}

};

int precedanceCheck(char anOperator)
{
	if (anOperator == '^')
		return 3;
	else if (anOperator == '*' || anOperator == '/')
		return 2;
	else if (anOperator == '+' || anOperator == '-')
		return 1;
	else
		return 0;
}

string postfixConverter(string arithmaticExpression)
{
	MyQueue myQueue(arithmaticExpression.length());
	string postfixedString = "";
	for (int count = 0; count < arithmaticExpression.length(); count++)
	{
		if ((arithmaticExpression[count] >= '0' && arithmaticExpression[count] <= '9') ||
			(arithmaticExpression[count] >= 'a' && arithmaticExpression[count] <= 'z') ||
			(arithmaticExpression[count] >= 'A' && arithmaticExpression[count] <= 'Z'))
			postfixedString += arithmaticExpression[count];
		else if (arithmaticExpression[count] == '(')
			myQueue.enQueue('(');
		else if (arithmaticExpression[count] == ')')
		{
			while (myQueue.topElement() != '(')
			{
				postfixedString += myQueue.topElement();
			}

			myQueue.deQueue();
		}
		else
		{
			while (precedanceCheck(arithmaticExpression[count]) <= precedanceCheck(myQueue.topElement()))
			{
				postfixedString += myQueue.topElement();
				myQueue.deQueue();
			}

			myQueue.enQueue(arithmaticExpression[count]);
		}
	}

	while (!myQueue.isEmpty())
	{
		postfixedString += myQueue.topElement();
		myQueue.deQueue();
	}

	return postfixedString;
}

int main()
{
    cout << "Infix to prefix" << endl;
	cout << " Postfix :   " << postfixConverter("4a*b+c/d") << endl;

	return 0;
}



