#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a[] = {25, 10, 5, 5, 20, 17, 20, 58, 65};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> vect(a, a + n);

    sort(vect.begin(), vect.end());
    cout << binary_search(vect.begin(), vect.end(), 5);

    auto q = lower_bound(vect.begin(), vect.end(), 20);

    // Returns the last occurrence of 20
    auto p = upper_bound(vect.begin(), vect.end(), 20);

    cout << "The lower bound is at position: ";
    cout << q - vect.begin() << endl;

    cout << "The upper bound is at position: ";
    cout << p - vect.begin() << endl;

    return 0;
}