#include <iostream>
#define sos 10
#define invalid -999999999

using namespace std;

class MyStack
{
    int Stack[sos];
    int top;

    public:

    MyStack( )
    {
        top = 0;
    }

    bool isEmpty()
    {


        if(top == 0)
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

       if(top == sos)
       {
           return true;
       }
       else
       {
           return false;
       }
    }

    bool push(int element)
    {
        if(isFull())
        {
           return false;
        }
        else
        {
            Stack[top] = element;
            top++;
            return true;
        }
    }

    bool pop()
    {
        if(isEmpty())
        {
            return false;
        }
        else
        {
            top--;
            return true;
        }
    }

    int checkTopElement()
    {
        if(isEmpty())
        {
            return invalid;
        }
        else
        {
            return Stack[top-1];
        }
    }

    void show()
    {
        if(isEmpty())
        {
            cout << "Stack empty\n";
        }
        else
        {
            for( int i=top-1; i>=0; i--)
            {
                cout << Stack[i] << endl;
            }
        }
    }
};

int main()
{
    MyStack ms;

    bool repeat = true;
    int elementOnTop;


    while(repeat)
    {
        cout<<"-----------------"<<endl;
        cout<<"What do you want to do?"<<endl;
        cout<<"\t1. Check whether the Stack is Empty"<<endl;
        cout<<"\t2. Check whether the Stack is Full"<<endl;
        cout<<"\t3. Push an Element in the Stack"<<endl;
        cout<<"\t4. Pop an Element from the Stack"<<endl;
        cout<<"\t5. Check the Top Element of the Stack"<<endl;
        cout<<"\t6. Print the Stack"<<endl;
        cout<<"\t7. Exit"<<endl;
        cout<<"-----------------"<<endl;

        cout<<"Enter your choice: ";
        int choice;
        cin>>choice;

        switch(choice)
        {
            case 1:

                if(ms.isEmpty())
                {
                    cout<<"Stack is Empty"<<endl;
                }
                else
                {
                    cout<<"Stack is NOT Empty"<<endl;
                }
                break;

            case 2:

                if(ms.isFull())
                {
                    cout<<"Stack is Full"<<endl;
                }
                else
                {
                    cout<<"Stack is NOT Full"<<endl;
                }
                break;

            case 3:

                int element;
                cout<<"Enter the element to push: ";
                cin>>element;

                if(ms.push(element))
                {
                    cout<<element<<" has been Pushed"<<endl;
                }
                else
                {
                    cout<<"Stack is Full. Can NOT be Pushed"<<endl;
                }

                break;

            case 4:

                if(ms.pop())
                {
                    cout<<"Element has been Popped"<<endl;
                }
                else
                {
                    cout<<"Stack is Empty. Can NOT be Popped"<<endl;
                }
                break;

            case 5:

                elementOnTop = ms.checkTopElement();

                if(elementOnTop != invalid)
                {
                    cout<<elementOnTop<<" is on top position"<<endl;
                }
                else
                {
                    cout<<"Stack is Empty.. Nothing on Top."<<endl;
                }

                break;

            case 6:

                ms.show();

                break;

            case 7:

                repeat = false;
                cout<<"Exiting...."<<endl;
                break;

            default:

                cout<<"Invalid Choice...."<<endl;
                break;
        }
    }
}

