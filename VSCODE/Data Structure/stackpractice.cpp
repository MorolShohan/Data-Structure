#include<iostream>
#include<stack>
using namespace std;

void show(stack <int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();

    }
}

int main()
{

    stack<int> st;
    for(int i=1;i<=10; i++)
        st.push(i);

    cout<<st.size()<<endl;
    //cout<<st.empty()<<endl;
    //cout<<st.top()<<endl;
    //st.pop();
    //cout<<st.size()<<endl;
    show(st);
}
