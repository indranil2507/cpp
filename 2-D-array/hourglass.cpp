#include <iostream>
using namespace std;

int main()
{
    int n = 6, m = 6;
    int arr[n][m];
    int sum = 0;
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < m - 2; j++)
        {
            sum = 0;
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            cout << sum << " ";
            maximum = max(sum, maximum);
        }
        cout << endl;
    }
    cout << maximum;

    return 0;
}