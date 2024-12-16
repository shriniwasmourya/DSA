#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;


void clearItBit(int n , int i){
    int mask = (1<<i);
    int r = n&(~mask);
    cout<<r<<endl;


}

int main(){
    int n = 6;

    clearItBit(n , 3);

return 0;
}