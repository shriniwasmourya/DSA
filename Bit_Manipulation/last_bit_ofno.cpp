#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void lastBit(int n , int i){
    int mask = ~0<<i;
    n = n &mask;
    cout<<n<<endl;
}


int main(){
    int n = 15 , i=2;

    lastBit(n , i);

return 0;
}