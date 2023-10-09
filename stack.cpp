#include <iostream>
#include <stack>
using namespace std;

void parenthesescheck();

int main()
{
    int t;
    cout << "Enter number of test cases:";
    cin >> t;

    for (int i = 0; i < t; i++) {

        parenthesescheck();
    }

    return 0;
}

void parenthesescheck()
{
    stack<char> st;
    string s;
    cout << "Enter the expression you want to check:";
    cin >> s;

    int flag = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
            st.push(s[i]);
            flag = 1;
        }
        if (!st.empty()) {
            if (s[i] == '}') {
                if (st.top() == '{')
                {
                    st.pop();
                    continue;
                }
                else
                    break;
            }
            if (s[i] == ']') {
                if (st.top() == '[') {
                    st.pop();
                    continue;
                }
                else
                    break;
            }
            if (s[i] == ')') {
                if (st.top() == '(') {
                    st.pop();
                    continue;
                }
                else
                    break;
            }
        }
        else {
            break;
        }
    }

    if ((st.empty()) && (flag == 1))
        cout << "Expression has Valid Parenthesis" << endl;
    else
        cout << "Expression has Invalid Parenthesis" << endl;
}
