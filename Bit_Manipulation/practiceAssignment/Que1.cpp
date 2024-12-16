#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void clearRangeOfBit(int n  , int i , int j){

    int leftmask = (~0)<<(j+1);
    int rightmask = (1<<i)-1;
    int mask = leftmask|rightmask;

    cout<<(n&mask)<<endl;
}


int main(){
    int n = 31 ; 
    int i=1 , j=3 ; 

    clearRangeOfBit(n , i , j);

return 0;
}