#include <iostream>
using namespace std;

void Toh(int n, char src, char dest, char help)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << src << " to rod " << dest << endl;
        return;
    }
    Toh(n - 1, src, help, dest);
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;
    Toh(n - 1, help, dest, src);
}

int main()
{
    Toh(5, 'A', 'C', 'B');
    return 0;
}