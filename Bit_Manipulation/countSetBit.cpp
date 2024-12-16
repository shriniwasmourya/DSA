#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void countSetBit(int n){
    int count=0;
    while(n>0){
        int mask = n&1;
        if(!mask){

        }else{
            count+=mask;
        }

        n=n>>1;
    }

    cout<<count<<endl;

}


void countSetBit1(int n){
    int count=0;
    while(n>0){
        int mask = n&1;
        count += mask;

        n=n>>1;
    }

    cout<<count<<endl;

}


int main(){
    int n=10 ; 

    countSetBit(n);

return 0;
}