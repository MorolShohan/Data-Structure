#include <iostream>
using namespace std;

template<typename T>
class stack{
    T *Stack;
    int Top, MaxSize;
    public:
    stack( int Size = 1 ){
        MaxSize = Size; //get Size
        Stack = new T[MaxSize]; //create array accordingly
        Top = 0; //start the stack
        }
    ~stack(){
	    delete[] Stack; //release the memory for stack
    }
    bool empty(){
        return (Top == 0); /*returns True if stack is empty*/
    }
    void resize(){
        //creates a new stack with a new capacity, MaxSize + Size
        T *tempStk = new T[ MaxSize * 2 ];
        //copy the elements from old to new stack
        for( int i=0; i<MaxSize; i++ ) tempStk[i] = Stack[i];
        MaxSize *= 2; //MaxSize increases by Size
        delete [] Stack; //release the old stack
        Stack = tempStk; //assign Stack with new stack
    }
    void push( T Element ){
        //inserts Element at the top of the stack
        if(full()) resize(); //increase size if full
        Stack[ Top++ ] = Element;
    }

    bool full(){
        /*returns True if stack is full*/
        return (Top == MaxSize  );
    }

    bool pop(){
        // removes top element from stack and puts it in
        if( empty() ) { return false; }
        Top--;
        // decreases size dynamically if Top is half of MaxSize
        if(MaxSize/2 == Top){
            T *tempStk = new T[ MaxSize / 2 ];
            for( int i=0; i<Top; i++ ) tempStk[i] = Stack[i];
            MaxSize /= 2;
            delete [] Stack;
            Stack = tempStk;
        }
        return true;
    }

    T top(){
        //returns top element
        if(Top != 0) return Stack[Top-1];
    }

    void show(){
        //prints the whole stack from top to bottom
        if(empty()) { cout << "Stack empty\n"; return; }
        // cout << "Stack size : " << MaxSize << endl;
        // cout << "Total elements : " << Top << endl;
        // cout << "All Elements : \n";
        for( int i=Top-1; i>=0; i-- ) cout << Stack[i] << " ";
        printf("\n");
    }
    int getCurSize(){ return MaxSize; }
};

bool isBalanced(string bracetSeq){

}

// ([()[]()])() yes
// (([(]))) no   (([(
// )
int main()
{
    stack<int>stk;
    int n;
    cout << "Testcase : ";
    cin >> n;
    getchar();
    while(n--){
        cout << "Enter bracet sequence : ";
        string bracetSeq;
        getline(cin,bracetSeq);
        stack<char>ch;

        for(int i = 0; i < bracetSeq.length(); i++){

            if(bracetSeq[i] == ']'){
                if(ch.empty() || ch.top() == '['){
                    if(!ch.empty()) ch.pop();
                    else return false;
                }else return false;
            }else if(bracetSeq[i] == ')'){
                if(ch.empty() || ch.top() == '('){
                    if(!ch.empty()) ch.pop();
                    else return false;
                }else return false;
            }else if(bracetSeq[i] == '(' || bracetSeq[i] == '['){
                ch.push(bracetSeq[i]);
            }
        }
        if(ch.empty()) cout << bracetSeq << " is " << "balanced\n";
        else cout << bracetSeq << " is " << "Not balanced\n";

    }
}
