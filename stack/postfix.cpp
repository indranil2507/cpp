#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

bool isOperand(char c)
{
    // If the character is a digit then it must
    // be an operand
    return isdigit(c);
}

double postfixEvaluation(string s)
{
    stack<double> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (isOperand(s[i]))
        {
            st.push(s[i] - '0');
        }
        else
        {
            double o1 = st.top();
            st.pop();
            double o2 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(o2 + o1);
                break;
            case '-':
                st.push(o2 - o1);
                break;
            case '*':
                st.push(o2 * o1);
                break;
            case '/':
                st.push(o2 / o1);
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    string exp = "231*+9-";
    cout << postfixEvaluation(exp);
    return 0;
}
