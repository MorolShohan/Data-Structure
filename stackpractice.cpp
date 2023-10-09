#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Shohan");
    s.push("Nabil");
    s.push("Arnab");
    s.push("EPU");

    while(!s.empty())
    {
        string x;
        x = s.top();
        cout<< x <<endl;
        s.pop();
    }


    return 0;
}

