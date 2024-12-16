#include<iostream>
using namespace std;
// int decimal(int n){
//     int num = n;
//     int decimal = 0;
//     int store = 1;
//     while(num>0){
//         int digit = num%10;
//         decimal +=digit * store;
//         store*=2;
//         num/=10;
//     }
//     return decimal;
// }

int binary(int n){
    int result = 0;
    int pow = 1;

    while(n>0){
        int digit = n%2;
       
        result +=digit*pow;
        n/=2;
        pow*=10;
    }return result;
}

int main(){
    int n = 7;
    
    // cout<<decimal(n);
    cout<<binary(n);
    return 0;
}