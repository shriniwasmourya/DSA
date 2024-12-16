#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;




int main(){
    int n = 6 , i= 3;

    int mask = 1<<i;

    int r = n|mask; 
    cout<<r;

return 0;
}