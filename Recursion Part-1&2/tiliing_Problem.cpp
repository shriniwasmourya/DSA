#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int tp(int n){
    if(n==0 || n==1){
        return 1;
    }

    int ans1 = tp(n-1); //2*n-1

    int ans2 = tp(n-2); //2*n-2

    return ans1+ans2;
}


int main(){
    int n = 5;
    int r = tp(n);
    cout<<"Totoal Ways : "<<r<<endl;

return 0;
}