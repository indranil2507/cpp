// C++ implementation to print the character and
// its frequency in order of its occurrence
#include <bits/stdc++.h>
using namespace std;

#define SIZE 26

// function to print the character and its frequency
// in order of its occurrence
void printCharWithFreq(string str)
{
    // size of the string 'str'
    int n = str.size();
    int odd = 0;

    // 'freq[]' implemented as hash table
    int freq[SIZE] = {0};

    // initialize all elements of freq[] to 0

    // accumulate freqeuncy of each character in 'str'
    for (int i = 0; i < n; i++)
        freq[str[i] - 'a']++;

    // traverse 'str' from left to right
    for (int i = 0; i < n; i++)
    {

        // if frequency of character str[i] is not
        // equal to 0

        if (freq[str[i] - 'a'] != 0)
        {
            if (freq[str[i] - 'a'] % 2 != 0)
            {
                odd++;
                cout << odd;
                freq[str[i] - 'a'] = 0;
            }
        }
    }
    if (odd > 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}

// Driver program to test above
int main()
{
    string str = "aaabbb";
    printCharWithFreq(str);
    return 0;
}
