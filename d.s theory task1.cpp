#include <bits/stdc++.h>
using namespace std;
class MyStack{
    int Stack[10], Top, MaxSize;
    public:
    //Initializing stack
    MyStack( int Size = 10 ){    MaxSize = Size; Top = 0;}
    bool isEmpty();
    bool isFull();
    bool push(int Element);
    bool pop();
    int topElement();
    void show();
};
bool MyStack :: isEmpty(){
    return (Top == 0);
}
bool MyStack :: isFull(){
    /*returns True if stack is full*/
    return (Top == MaxSize);
}
bool MyStack :: push(int Element ){
    // inserts Element at the top of the stack
    if( isFull( ) ) { cout << "Stack is Full\n"; return false; }
    // push element if there is space
     Stack[ Top++ ] = Element;
    return true;
}
bool MyStack :: pop(){
    // removes top element from stack and puts it in
    if( isEmpty() ) { cout << "Stack empty\n"; return false; }
    Top--;
    return true;
}
int MyStack ::  topElement(){
    // gives the top element
    return Stack[ Top - 1 ];
}
void MyStack :: show(){
    //prints the whole stack from top to bottom
    if(isEmpty()) { cout << "Stack empty\n"; return; }
    for( int i=Top-1; i>=0; i-- ) cout << Stack[i] << endl;
}

int main()
{
    MyStack stk;
    int x;
    while(!stk.isFull()){
        cout << "Insert (total 10) : ";
        cin >> x;
        stk.push(x);
        if(stk.isFull()) cout << "Stack is full now" << endl;
    }
    cout << "Showing all elements : " << endl;
    stk.show();
    cout << "Top element : ";
    cout << stk.topElement() << endl;
    cout << "Poping one element from the top : ";
    cout << stk.topElement() << " succuessfully popped\n";
    stk.pop();

    cout << "Now top element : ";
    cout << stk.topElement() << endl;


}
#include <bits/stdc++.h>
using namespace std;
class MyStack{
    int Stack[10], Top, MaxSize;
    public:
    //Initializing stack
    MyStack( int Size = 10 ){    MaxSize = Size; Top = 0;}
    bool isEmpty();
    bool isFull();
    bool push(int Element);
    bool pop();
    int topElement();
    void show();
};
bool MyStack :: isEmpty(){
    return (Top == 0);
}
bool MyStack :: isFull(){
    /*returns True if stack is full*/
    return (Top == MaxSize);
}
bool MyStack :: push(int Element ){
    // inserts Element at the top of the stack
    if( isFull( ) ) { cout << "Stack is Full\n"; return false; }
    // push element if there is space
     Stack[ Top++ ] = Element;
    return true;
}
bool MyStack :: pop(){
    // removes top element from stack and puts it in
    if( isEmpty() ) { cout << "Stack empty\n"; return false; }
    Top--;
    return true;
}
int MyStack ::  topElement(){
    // gives the top element
    return Stack[ Top - 1 ];
}
void MyStack :: show(){
    //prints the whole stack from top to bottom
    if(isEmpty()) { cout << "Stack empty\n"; return; }
    for( int i=Top-1; i>=0; i-- ) cout << Stack[i] << endl;
}

int main()
{
    MyStack stk;
    int x;
    while(!stk.isFull()){
        cout << "Insert (total 10) : ";
        cin >> x;
        stk.push(x);
        if(stk.isFull()) cout << "Stack is full now" << endl;
    }
    cout << "Showing all elements : " << endl;
    stk.show();
    cout << "Top element : ";
    cout << stk.topElement() << endl;
    cout << "Poping one element from the top : ";
    cout << stk.topElement() << " succuessfully popped\n";
    stk.pop();

    cout << "Now top element : ";
    cout << stk.topElement() << endl;


}
