#include <bits/stdc++.h>
using namespace std;
bool areBracketsBalanced(string expr)
{
    stack<char> s;
    char x;
    cout << "Enter the expression you want to check:";
    cin >> x;
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')
        {
            s.push(expr[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (expr[i]) {
        case ')':

            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    return (s.empty());
}

int main()
{
    string expr = "{()}[]";

    if (areBracketsBalanced(expr))
        cout << "Expression has Balanced Parenthesis";
    else
        cout << "Expression Does not have Balanced Parenthesis.";
    return 0;
}
