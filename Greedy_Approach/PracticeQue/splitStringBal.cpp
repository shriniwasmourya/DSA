#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void splitStringinBalanced(string str){
    int count = 0; int n = str.size();
    int lcounter = 0 , rcounter = 0 ;

    for(int i=0 ; i<n ;i++){
      if(str[i]=='L'){
        lcounter++;
      }else{
        rcounter++;
      }

      if(rcounter == lcounter){
        count++;
      }
    }
       
    
    cout<<count<<endl;
}

int main(){
    string str = "RLRRLLRLRL";
    //ans = 4;
    splitStringinBalanced(str);


return 0;
}