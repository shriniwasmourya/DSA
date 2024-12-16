#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int bitIthBit(int num , int i){
    int bitmask = 1<<i;

    if(!(num&bitmask)){
        return 0;
    }else{
        return 1;
    }
}


int main(){
    int n = 6 , i =3 ; 

    cout<<bitIthBit(6,3 )<<endl;

return 0;
}