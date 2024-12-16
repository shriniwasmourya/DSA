#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void findLargestOddNo(string str){
    int n  = str.size();
    string result = "";
    vector<int> v(n,0);
    int idx = str[n-1]-'0';
    if(idx % 2 != 0){
        result = str;
        cout<<result<<endl;
        return;
    }
    for(int i=0  ; i<n-1 ; i++){
        char ch = str[i];
         v[i] = ch-'0'; 
    }

    for(int i=0  ; i<n ; i++){
        if(v[i] < v[i+1]){
            if(v[i+1]%2 != 0){
                result = v[i+1];
                cout<<v[i+1]<<endl;
            }
        }
    }

    // cout<<"Largest ODD number in string : "<<result<<endl;
}

int main(){
    string str = "565842";
    findLargestOddNo(str);
    
  

return 0;
}