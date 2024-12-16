#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void fastExpo(int n , int x){
    
    int result = 1;
    while(x>0){

        int lastBit = n&1;
        if(lastBit){
            result *= x;
        }
        n = n*n;

        n=n>>1;

    }
  

    cout<<result;
}


int main(){
     int n = 3;
     int x = 5;

     fastExpo(n,x);

return 0;
}