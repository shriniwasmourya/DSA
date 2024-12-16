#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;


void binarystring(int n , int i , string ans){
    //Base case
    if(n==0){
        cout<<ans<<endl;
        return;
    }

    if(i != 1){
        binarystring(n-1 , 0 , ans+"0");
        binarystring(n-1 , 1 , ans+'1');
    }else{
        binarystring(n-1 , 0 , ans+'0');
    }
}

int main(){
    string ans = "";
    binarystring(3 , 0 , ans);

return 0;
}