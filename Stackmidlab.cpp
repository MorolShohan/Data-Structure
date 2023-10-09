#include<iostream>
using namespace std;

//isEmpty()
//isFull()
//maxsize()
//pop()
//push()

class mystack
{
    int *Stack = new int[5];
    int top = 0;
    int maxsize = 5;
public :
    bool isEmpty()
    {
        if(top==0)
        {
            return true;
        }
        else return false;
    }

    bool isFull()
    {
        if(top==maxsize)
        {
            return true;
        }
        else return false;
    }

    void push(int value)
    {
        if(isFull())
        {
            cout<<"Stack is full\n";
        }
        else

            {
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

    int getTopvalue()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
            return Stack[top-1];
    }
    void print()
    {
        for(int i=top-1;i<=0;i--)
        {
            cout<<Stack[i];
        }
    }

    void resize(int size)
    {
        int *tempArray = new int [maxsize+size];
        for(int i=0;i<maxsize;i++)
        {
            tempArray[i]=Stack[i];
        }
        delete[] Stack;
        Stack = new int[size+maxsize];
        maxsize +=size;
        Stack = tempArray;
    }

};


int main()
{


    mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(10);
    st.push(20);
    st.resize(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();

    st.print();
    st.getTopvalue();

    return 0;
}
