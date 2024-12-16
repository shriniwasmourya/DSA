#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int decToBin(int n ){
    int sum = 0 ; 
    int pow = 1 ; 


    while(n>0){
        int rem = n%2;
        sum += rem * pow;
        pow*=10;
        n/=2;
    }
    return sum ; 
}


int main(){
    int n = 334  ; 
    
//   int sum = decToBin(n);

/*Straight forward Method */
    if(!(n&1)){
        cout<<"Even : ";

    }else{
        cout<<"Odd";
    }

    

return 0;
}