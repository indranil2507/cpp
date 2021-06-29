#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, d;
    cin >> n;
    cin >> d;
    int arr[n];
    int arr_new[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    copy_n(arr, n, arr_new);
    for (int i = 0; i < n; i++)
    {
        int new_loc = (i + d) % n;
        arr_new[i] = arr[new_loc];
        cout << arr_new[i] << " ";
    }
    return 0;
}