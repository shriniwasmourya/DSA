#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;




int main(){
    vector<int> v(5,-1);

    for(int i=0  ; i<v.size(); i++){
        // cout<<v[i]<<"  ";(
    }cout<<endl;

    cout<<v.size()<<endl;
    v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;



return 0;
}