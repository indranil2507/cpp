#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b, n, m;

    cin >> b >> n >> m;
    int keyboards[n];
    int usb[m];

    for (int i = 0; i < n; i++)
    {
        cin >> keyboards[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> usb[i];
    }
    int max = 0;
    int sum = 0;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = keyboards[i] + usb[j];

            if (sum <= b)
            {
                if (sum > max)
                {
                    max = sum;
                }
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        cout << max;
    }
    else
    {
        cout << -1;
    }
}