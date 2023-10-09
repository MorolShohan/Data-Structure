#include <iostream>
using namespace std;

class MyStack
{
    int *Stack=new int[5];
    int top=0,maxSize=5;
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
    void print()
    {


int main()
{
    MyStack ms;



    return 0;
}

