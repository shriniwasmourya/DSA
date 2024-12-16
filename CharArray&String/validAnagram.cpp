#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool anaGram(string str1, string str2)
{
    int n = str1.length();
    int m = str2.length();

    if (n != m)
    {
        cout << "Not a valid Anagram:";
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int index = str1[i] - 'a';
        count[index]++;
    }

    for (int i = 0; i < m; i++)
    {
        int index = str2[i] - 'a';
        if (count[index] == 0)
        {
            cout << "Not a valid Anagram:";
            return false;
        }
        count[index]--;
    }

     cout<<"valid Anagram:";
        return true;
}

int main()
{
    string str1 = "aacc";
    string str2 = "ccac";

    anaGram(str1, str2);

    return 0;
}