#include <iostream>
using namespace std;

int prod(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevProd = prod(n, p - 1);
    return n * prevProd;
}

int main()
{
    int n, p;
    cin >> n >> p;

    cout << prod(n, p) << endl;
}
