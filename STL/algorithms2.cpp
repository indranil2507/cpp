//count
//find

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int a[] = {1, 5, 2, 9, 4, 5, 3, 5, 8, 9, 7};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> vect(a, a + n);

    cout << "vector is";

    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;

    cout << "freq of 5 is" << count(vect.begin(), vect.end(), 5);
    if (find(vect.begin(), vect.end(), 15) != vect.end())
    {
        cout << "present";
    }
    else
    {
        cout << "absent";
    }
}
