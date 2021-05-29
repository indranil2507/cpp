#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char sen[n + 1];

    cin.getline(sen, n);
    int i = 0;
    int currL = 0, maxL = 0;
    int st = 0, maxst = 0;

    while (1)
    {
        if (sen[i] == ' ' || sen[i] == '\0')
        {
            if (currL > maxL)
            {
                maxL = currL;
                maxst = 0;
            }
            currL = 0;
            st = i + 1;
        }
        currL++;
        if (sen[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxL << endl;

    for (int i = 0; i < maxL; i++)
    {
        cout << sen[i + maxst];
    }

    return 0;
}