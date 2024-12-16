#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void maxWater(vector<int> v, int n)
{   
    int totalFinalWaterTap=0;
    vector<int> bothmin(n);
    vector<int> leftmax(n);
    vector<int> final(n);
    vector<int> rightmax(n);
    rightmax[n - 1] = v[n-1];
    // rightmax.push_back(INT_MIN);
    leftmax[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        leftmax[i] = max(leftmax[i - 1], v[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = max(rightmax[i + 1], v[i + 1]);
    }
    cout<<"Both min :";
    for(int i=0 ; i<n ; i++){
        bothmin[i] = min(leftmax[i] , rightmax[i]);
        cout<<bothmin[i]<<" ";
    }cout<<endl;
    cout<<"Final ans :";
    for(int i=0 ; i<n ; i++){
        final[i] = bothmin[i] - v[i];
        cout<<final[i]<<' ';
    }cout<<endl;
    cout<<"Final after initialize neg to zero:";
    for(int i=0 ; i<n ;i++){
        if(final[i]<0){
            final[i] = 0;
        }
        totalFinalWaterTap += final[i];

        
    }cout<<endl;
cout<<"Total Water tap in Tank :"<<totalFinalWaterTap<<endl;
   
}

int main()
{
    vector<int> v = {4, 2, 0, 6, 3, 2, 5};
    int n = v.size();

    maxWater(v, n);

    return 0;
}