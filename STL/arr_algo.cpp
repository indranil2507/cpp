#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int arr[6] = {9, 2, 2, -5, 6, 8};
    int arr1[6];
    int arr2[6] = {0};

    all_of(arr, arr + 6, [](int x)
           { return x > 0; })
        ? cout << "All elements are positive" << endl
        : cout << "All elements are not positive" << endl;
    any_of(arr, arr + 6, [](int x)
           { return x < 0; })
        ? cout << "Some elements are negative" << endl
        : cout << "No negative elements" << endl;
    none_of(arr, arr + 6, [](int x)
            { return x == 0; })
        ? cout << "No zero elements present in array" << endl
        : cout << "Zero elements in array" << endl;
    copy_n(arr, 6, arr1);
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    iota(arr2, arr2 + 6, 20);
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }
}