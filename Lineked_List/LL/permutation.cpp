#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cstring>
using namespace std;

void permutaion(string str, string ans)
{
    // Base case...

    if (str.size() == 0)
    {
        cout << ans << endl;
        return;
    }

    // Main Part...
    for (int i = 0; i < str.size(); i++)
    {   char ch = str[i];
        int n = str.length();
        string nextstr = str.substr(0,i) + str.substr(i+1 , n-i-1);
        permutaion(nextstr , ans+ch);
    }
}

int main()
{
    string str = "abc";
    string ans = " ";
    permutaion(str , ans);
    return 0;
}