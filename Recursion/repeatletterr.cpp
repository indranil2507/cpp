#include <iostream>
using namespace std;

void replacePi(string s)
{
    if (s.length() == 0)
    {
        cout << "-1";
        return;
    }
    if (s[0] == s[1])
    {

        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

int main()
{
    replacePi("aabb");
    cout << endl;
}