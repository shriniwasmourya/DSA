#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;


void updadteIthBit(int n , int i , int val){
    /*First clear bit*/

    n =n & ~(1<<i);

    /*n|(val<<i)*/

    n = n|(val<<i);
    cout<<n<<endl;
}

int main(){
    int n = 7 ; 
    int i = 2 ; 
    int val = 0;

     updadteIthBit(n ,  i , val);

return 0;
}