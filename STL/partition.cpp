// C++ code to demonstrate the working of
// partition() and is_partitioned()
#include <iostream>
#include <algorithm> // for partition algorithm
#include <vector>    // for vector
using namespace std;
int main()
{
    // Initializing vector
    vector<int> vect = {2, 1, 5, 6, 8, 7};

    // Checking if vector is partitioned
    // using is_partitioned()
    is_partitioned(vect.begin(), vect.end(), [](int x)
                   {
                       return x % 2 == 0;
                   })
        ?

        cout << "Vector is partitioned"
        : cout << "Vector is not partitioned";
    cout << endl;

    // partitioning vector using partition()
    partition(vect.begin(), vect.end(), [](int x)
              {
                  return x % 2 == 0;
              });

    // Checking if vector is partitioned
    // using is_partitioned()
    is_partitioned(vect.begin(), vect.end(), [](int x)
                   {
                       return x % 2 == 0;
                   })
        ?

        cout << "Now, vector is partitioned after partition operation"
        : cout << "Vector is still not partitioned after partition operation";
    cout << endl;

    // Displaying partitioned Vector
    cout << "The partitioned vector is : ";
    for (int &x : vect)
        cout << x << " ";

    stable_partition(vect.begin(), vect.end(), [](int x)
                     { return x % 2 == 0; });

    // Displaying partitioned Vector
    cout << "The partitioned vector is : ";
    for (int &x : vect)
        cout << x << " ";
    cout << endl;

    // Declaring iterator
    vector<int>::iterator it1;

    // using partition_point() to get ending position of partition
    auto it = partition_point(vect.begin(), vect.end(), [](int x)
                              { return x % 2 == 0; });

    // Displaying partitioned Vector
    cout << "The vector elements returning true for condition are : ";
    for (it1 = vect.begin(); it1 != it; it1++)
        cout << *it1 << " ";
    cout << endl;

    return 0;
}
