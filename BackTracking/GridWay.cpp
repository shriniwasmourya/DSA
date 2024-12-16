#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;


int gridWays(int r , int c , int n , int m , string ans){
    if(r==n-1  && c == m-1){
        cout<<ans<<"  "<<endl;
        
        return 1;
    }
 
    if(r>= n || c>= m){
        return 0;
    }

    //Logic

    //Right ==> ways1+ways2
    int val1 = gridWays(r , c+1 , n , m , ans+"R ");
    int val2 = gridWays(r+1 , c , n , m , ans+"L ");

    return val1 + val2;
}

int main(){
  
    int n=3 , m=4;
    string ans;

    cout<<"Total ways Found : \n"<<gridWays(0,0,n , m ,ans)<<endl;


return 0;
}