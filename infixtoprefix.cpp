#include <iostream>

using namespace std;


//Stack in object oriented approach

class MyStack
{
    char *Stack=new char[50];
    int top=0,maxSize=50;
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
    void push(char value)
    {
        if(isFull())
        {
            cout<<"Stack is full"<<endl;
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
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            top--;
        }
    }
    char getTopValue()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return '\0';
        }
        else
        {
            return Stack[top-1];

        }
    }
    void print()
    {
        for(int i=top-1;i>=0;i--)
        {
            cout<<Stack[i]<<endl;
        }
    }
    void resize(int size)
    {
        char *tempStack=new char[maxSize+size];
        for(int i=0;i<maxSize;i++)
        {
            tempStack[i]=Stack[i];
        }
        delete[] Stack;
        Stack=new char[size+maxSize];
        maxSize+=size;
        Stack=tempStack;
    }
};


int precedanceCheck(char c)
{
    if(c=='^')return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-')return 1;
    else return 0;

}
//Step 1: Reverse the infix expression i.e A+B*C will become C*B+A. Note while reversing each ‘(‘ will become ‘)’ and each ‘)’ becomes ‘(‘.
//Step 2: Obtain the “nearly” postfix expression of the modified expression i.e CB*A+.
//Step 3: Reverse the postfix expression. Hence in our example prefix is +A*BC.
    //Note that for Step 2, we don’t use the postfix algorithm as it is. There is a minor change in the algorithm.
    //We have to pop all the operators from the stack which are greater than or equal to in precedence than that of the scanned operator.
    //But here, we have to pop all the operators from the stack which are greater in precedence than that of the scanned operator.
    //Only in the case of “^” operator, we pop operators from the stack which are greater than or equal to in precedence.



int main()
{

    //string exp="A+B";
    string exp="A-(B*C)/D";
    string reversedExp;
    string output;
    string reversedOutput;
    MyStack ms;
    for(int i=exp.size()-1;i>=0;i--)
    {
        if(exp[i]=='(')
        {
            reversedExp+=')';
        }
        else if(exp[i]==')')
        {
            reversedExp+='(';
        }
        else
            reversedExp+=exp[i];
    }


    for(int i=0;i<reversedExp.size();i++)
    {
        if((reversedExp[i]>='0' && reversedExp[i]<='9') || (reversedExp[i]>='a' && reversedExp[i]<='z') || (reversedExp[i]>='A' && reversedExp[i]<='Z'))
        {
            output+=reversedExp[i];
        }
        else if(reversedExp[i]=='(')
        {
            ms.push(reversedExp[i]);
        }
        else if(reversedExp[i]==')')
        {
            while(ms.getTopValue()!='(')
            {
                output+=ms.getTopValue();
                ms.pop();
            }
            ms.pop();
        }
        else
        {
            while(precedanceCheck(reversedExp[i])<precedanceCheck(ms.getTopValue()))
            {
                output+=ms.getTopValue();
                ms.pop();
            }
            ms.push(reversedExp[i]);
        }
    }

    while(!ms.isEmpty())
    {
        output+=ms.getTopValue();
        ms.pop();
    }

    for(int i=output.size()-1;i>=0;i--)
    {
        reversedOutput+=output[i];
    }


    cout<<"Infix Expression: "<<exp<<endl;
    cout<<"Prefix Expression: "<<reversedOutput<<endl;
    return 0;
}

