#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;




int main(){
    vector<vector<int>> mat = { {2,3,4},{3},{4,6}};

    for(int i=0 ; i<mat.size(); i++){
        for(int j=0 ; j<mat[i].size(); j++)
        {
            cout<<mat[i][j]<<"  ";
        }cout<<endl;
    }
    vector<int> v ;
    int n = v.size();
    for(int i=0 ; i<5 ; i++){
        v.push_back(i);
    }

    cout<<v.size()<<endl;
    cout<<v.capacity();

return 0;
}