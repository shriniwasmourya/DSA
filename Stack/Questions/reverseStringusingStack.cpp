#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
#include<list>
#include<stack>
#include<queue>
using namespace std;

string reverseString(string str){
    string ans;
    stack<char> s;

    for(int i=0 ;i<str.size()  ; i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        char ch = s.top();
        ans += ch;
        s.pop();
    }
    return ans;
}


int main(){
    string str = "abcs";
   
    cout<<reverseString(str); 

return 0;
}