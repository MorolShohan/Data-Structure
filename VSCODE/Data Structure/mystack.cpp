#include <bits/stdc++.h>
using namespace std;
class MyStack{
    int *Stack, Top, MaxSize; 
    public:
    MyStack(int);
    ~MyStack();
    bool isEmpty(); 
    bool isFull(); 
    void push(int Element); 
    bool pop(); 
    int topElement(); 
    void show(); 
    void resize( int size); //Resize the stack 
};
MyStack::MyStack( int Size = 4 ){
    MaxSize = Size; //get Size
    Stack = new int[MaxSize]; //create array accordingly
    Top = 0; //start the stack
}
MyStack::~MyStack(){
    delete [] Stack; //release the memory for stack
}
void MyStack:: resize( int Size = 4  ){
    //creates a new stack with a new capacity, MaxSize + Size
    int *tempStk = new int[ MaxSize + Size ];
    //copy the elements from old to new stack
    for( int i=0; i<MaxSize; i++ ) tempStk[i] = Stack[i];
    MaxSize += Size; //MaxSize increases by Size
    delete [] Stack; //release the old stack
    Stack = tempStk; //assign Stack with new stack
}
void MyStack:: push( int Element ){
    //inserts Element at the top of the stack
    if( isFull( ) )    resize( ); //increase size if full
     Stack[ Top++ ] = Element;
}
bool MyStack :: isEmpty(){
    return (Top == 0);
}
bool MyStack :: isFull(){
    /*returns True if stack is full*/
    return (Top == MaxSize);
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
    stk.resize();
    while(!stk.isFull()){
        cout << "Insert (total 10) : ";
        cin >> x;
        stk.push(x);
        if(stk.isFull()) cout << "Stack is full now" << endl;
    }
    cout << "Showing all elements : " << endl;
    stk.show();
    
    
}
