/*Push Operation

Initially, we set size 10 and we input 30 values

Since there lack of space available in the stack to accommodate 30 elements in 10 positions.

So we call the resize1 function, after the initial resize call we resize the stack size to 20 by doubling the previous value. So now we have space to accommodate 20 elements which are still insufficient.

So we call the resize1 function again, to double its previous value to 40.

Pop Operation

We resize the value once the index is less than half by calling resize2 function.
 */

#include <iostream>

using namespace std;

class Stack{

public:

//Constructor with stack size as 10

Stack (int prev_size = 10){

size = prev_size;

Index = 0;

stack = new int [size];

}

//Destructor for stack

~Stack (){

delete [] stack;

}

//resize the stack when stack is full, here we are doublung the size

void resize1(){

int new_size = size*2;// we can assign any positive integer greater than 1 instead of two.

int * new_stack;

//Try catch block if unable to allocate memory

try{

new_stack = new int[new_size];

} catch (std::bad_alloc&) {

// unsuccessful allocation

}

//allocating members of old stack into resized stack.

for ( int i=0; i<=size; ++i ){

new_stack[i] = stack[i];

}

//delete old stack

delete [] stack;

stack = new_stack;

size = new_size;

}
void resize2(){

int new_size = size/2;// we can assign any positive integer greater than 1 instead of two.

int * new_stack;
new_stack = new int[new_size];

//allocating members of old stack into resized stack.

for ( int i=0; i<=size; ++i ){

new_stack[i] = stack[i];

}

//delete old stack

delete [] stack;

stack = new_stack;

size = new_size;

}
//to push the element in stack

void push(int element){

if (Index + 1 == size){
cout<<"\ncalling resize\n";

resize1();

cout<<"New size-"<<size<<"\n";

}

stack[Index++] = element;
cout<<"\t"<<element;
}



//reterive top of stack

int top(){

if ( Index <= 0 ){

throw std::out_of_range("stack is empty");

} else {

return stack[Index-1];

}

}

//remove top of stack

void pop(){

if ( Index <= 0 ){

throw std::out_of_range("stack is empty");

} else {

--Index;

}
if (Index<=size/2)
{
resize2();
}

}

private:

int * stack;

int size;

int Index;

};

int main()

{

Stack stk;

//inserting into stack

for ( int i=0;i<=30;++i ){

stk.push(i);



}
cout<<"\n";

//removing from stack

for ( int i=0;i<=30;++i ){

stk.pop();

cout << stk.top() << endl;

}

}
