//push
//pop
//top
//empty

#include <iostream>
using namespace std;
#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack empty";
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "stack empty";
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    stack st;
    int l;
    cin >> l;
    int q;
    for (int i = 0; i < n; i++)
    {
        cin >> q;

        switch (q)
        {
        case 1:
            int x;
            cin >> x;
            if (st.empty())
            {
                st.push(x);
            }
            else
            {
                st.push(max(x, st.Top()));
            }

            break;
        case 2:
            st.pop();
            break;
        case 3:
            cout << st.Top();
            break;
        default:
            break;
        }
    }

    return 0;
}
