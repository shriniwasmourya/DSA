#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int func(int n ){
    if(n==1 || n==0){
        return 1;
    }
    return n * func(n-1);
}


int main(){
    int n = 5;
    cout<<"Factorial of "<<n<<" : "<<func(n);

return 0;
}