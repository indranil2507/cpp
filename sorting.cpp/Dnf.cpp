#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dnfSort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr, low, mid);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr, high, mid);
            high--;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 2, 2, 0, 0, 1, 2, 0};
    dnfSort(arr, 9);
    for (int i = 0; i <= 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}