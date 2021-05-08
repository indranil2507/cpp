#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    char str[n + 1];
    cin >> str;

    int l = 0;
    int flag = 0;

    for (i = 0; i < n; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << str << " is not a palindrome" << endl;
    }
    else
    {
        cout << str << " is a palindrome" << endl;
    }
    system("pause");
    return 0;
}