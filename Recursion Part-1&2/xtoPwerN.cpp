#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int func(int n , int x){
    if(n==0){
        return 1;
    }

    int halfpow = func(n/2,x);
    int halfpowsq = halfpow * halfpow;

    if(n%2 != 0){
        return x*halfpowsq;
    }
    return halfpowsq;
}


int main(){
    int n = 4 ; 
    int x = 2 ;
    cout<<"Power of X : "<<func(n , x);
return 0;
}