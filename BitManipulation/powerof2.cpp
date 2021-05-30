#include <iostream>
using namespace std;

bool ispowerof2(int n)
{
    return !(n & n - 1);
}

int main()
{

    if (ispowerof2(8))
    {
        cout << "is a power of 2";
    }
    else
    {
        cout << "is not a power of 2";
    }
}