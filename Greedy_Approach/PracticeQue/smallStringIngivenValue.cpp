#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void smallestStringInGivenValue(int n , int k){
    string ans;

    while(n!=0){
        int ch = k-(n-1)*26;

        if(ch<=0){
            ans.push_back('a');
            n--;
            k--;
        }else{
            ans.push_back(ch+'a'-1);
            n--;
             k -= ch;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int n = 3;
    int k = 27;

    smallestStringInGivenValue(n , k);


return 0;
}