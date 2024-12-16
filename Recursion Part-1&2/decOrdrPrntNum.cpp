#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void fact(int n){
    if(n==0){
        return ;
    }

    // cout<<"Num : "<<n<<endl;   //Decreasing order
        fact(n-1);
   cout<<"Num : "<<n<<endl;      //INcreasing order
    
 
}


int main(){
    int n = 10;
    // cout<<fact(n)<<endl;
    fact(n);

return 0;
}