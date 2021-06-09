#include <iostream>
using namespace std;

string Dup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = Dup(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    else
    {
        return (ch + ans);
    }
}
int main()
{
    cout << Dup("aaabbbccceeedd") << endl;
}