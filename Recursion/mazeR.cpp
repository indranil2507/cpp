#include <iostream>
using namespace std;

int board(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i > n - 1 || j > n - 1)
    {
        return 0;
    }

    return board(n, i + 1, j) + board(n, i, j + 1);
}
int main()
{
    cout << board(3, 0, 0) << endl;
    return 0;
}
