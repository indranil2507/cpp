#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void waveSort(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr, i, i - 1);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr, i, i + 1);
        }
    }
}

int main()
{
    int arr[] = {8, 5, 2, 1, 4, 7, 18, 0, 21, 9};
    waveSort(arr, 9);
    for (int i = 0; i <= 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}