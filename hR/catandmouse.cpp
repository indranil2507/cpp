#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int a[q];
    int b[q];
    int c[q];

    for (int i = 0; i < q; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    for (int i = 0; i < q; i++)
    {
        int ans1 = c[i] - a[i];
        int ans2 = c[i] - b[i];

        if (abs(ans1) > abs(ans2))
        {
            cout << "Cat B" << endl;
        }
        else if (abs(ans2) > abs(ans1))
        {
            cout << "Cat A" << endl;
        }
        else
        {
            cout << "Mouse C" << endl;
        }
    }
}
