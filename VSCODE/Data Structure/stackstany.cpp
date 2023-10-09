#include<iostream>
using namespace std;

//isEmpty()
//isFull()
//maxsize()
//pop()
//push()

class mystack
{
    int Stack[5];
    int top = 0;
    int maxsize = 5;
public :
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
        if(top==maxsize)
        {
            return true;
        }
        return false;
    }

    void push(int value)
    {
        if(isFull())
        {
            cout<<"Stack is full\n";
        }
        else{
            Stack[top]=value;
            top++;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty\n";
        }
        else{
            top--;
        }
    }
    void print()
    {
        for(int i=top-1;i<=0;i--)
        {
            cout<<Stack[i];
        }
    }

};


int main()
{


    mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.print();

    return 0;
}
