#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int func(int n){
    if(n==0){
        return 0;
    }
    return n+func(n-1);
}


int main(){
    int n= 3;
    cout<<"Sum of N natural no of "<< n << ": "<<func(n);

return 0;
}