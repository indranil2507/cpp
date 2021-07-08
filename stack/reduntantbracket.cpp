#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> st;
    string exp;
    cin >> exp;
    bool ans = false;

    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
        {
            st.push(exp[i]);
        }
        else if (exp[i] == '(')
        {
            st.push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
                break;
            }
            while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
            {
                st.pop();
            }
            st.pop();
        }
    }
    cout << ans << endl;
}