#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void countingSort(vector<int> v)
{
    int n = v.size();
    vector<int> fre(n);
    int minValue = INT_MAX , maxValue = INT_MIN;
    int j=0 ; 

    //For Finding Range max and mix...
    for(int i=0 ; i<n ; i++){
        minValue = min(minValue , v[i]);
        maxValue = max(maxValue , v[i]); 
    }

    for (int i = 0; i < n; i++)
    {
        fre[v[i]]++;
    }

    for(int i= minValue ; i<=maxValue ; i++){
        while(fre[i] > 0){
            v[i] = i;
            fre[i]--;
        }
    }



    for (int i = 0; i < n; i++)
    {
        cout << fre[i] << "  ";
    }
    cout << endl;

     for (int i = 0; i < n; i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {1, 4, 1, 3, 2, 4, 3, 7};
    countingSort(v);

    return 0;
}