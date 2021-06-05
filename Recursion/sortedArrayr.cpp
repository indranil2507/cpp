#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }

    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] && restArray);
}

int main()
{
    int arr[] = {1, 2, 6, 4, 5};

    cout << sorted(arr, 5) << endl;
    return 0;
}