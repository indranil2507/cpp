//sort
//min_max
//reverse
//sum

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int a[] = {1, 5, 2, 9, 4, 5, 3, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> vect(a, a + n);

    cout << "vector is";

    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;

    //sort

    sort(vect.begin(), vect.end());

    cout << " sortedvector is";

    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;

    reverse(vect.begin(), vect.end());

    cout << " reversed vector is";

    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;

    cout << "max elemnt" << *max_element(vect.begin(), vect.end());
    cout << endl;
    cout << "min elemnt" << *min_element(vect.begin(), vect.end());
    cout << endl;

    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);

    return 0;
}
