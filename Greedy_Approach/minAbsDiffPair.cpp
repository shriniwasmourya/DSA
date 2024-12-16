#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void minAbsoluteDiffPair(vector<int> A , vector<int> B){
    sort(A.begin() , A.end());
    sort(B.begin(),B.end());
    int ans = 0;
    for(int i=0 ; i<A.size() ; i++){
        ans += abs(A[i]-B[i]);
    }

    cout<<"Minimum Absolute Diffrence Pair : "<<ans<<endl;
}

int main(){
    vector<int> A = {1,2,3};
    vector<int> B = {2,1,3};

    minAbsoluteDiffPair(A,B);

return 0;
}