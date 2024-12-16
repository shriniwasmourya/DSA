#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;




int main(){
    vector<int> v  = {1,5,3,2,2,7,6,4,8,9};
    int n = v.size();
    vector<int> result;

    for(int i=0  ; i<n ; i++){
        if(v[i]==v[i+1]){
            result.push_back(++i);
            result.push_back(++i);
            break;
        }
    }
    for(int i=0 ; i<result.size();i++){
        cout<<result[i]<<"  ";
    }cout<<endl;
return 0;
}