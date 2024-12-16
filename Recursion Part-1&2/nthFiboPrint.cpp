#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int func(int n){
    if(n==1 || n==0){
        return n;
    }
    return func(n-1)+func(n-2);
}



int main(){
    int n=4;

    cout<<"Nth term of Fibo : "<<func(n)<<endl;
return 0;
}