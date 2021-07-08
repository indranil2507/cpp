#include <iostream>
#include <stack>
using namespace std;
#define n 20
class queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue underload" << endl;
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }
    bool empty()
    {
        if (s1.empty() && s2.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    //cout<<q.pop()<<endl;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(50);
    q.push(1);
    cout << q.empty() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;
    return 0;
}
