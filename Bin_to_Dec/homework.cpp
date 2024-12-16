#include<iostream>
using namespace std;

int binToDec(int num){
    int sum = 0;
    int pow = 1;
    int n = num;

    while(n>0){
        int digit = n%10;
        sum += digit*pow;
        pow*=2;
        n/=10;
    }
    return sum;
}
int decToBin(int num){
    int result = 0 ;
    int pow = 1;
    int n = num;
    while(n>0){
        int rem = n%2;
        result +=rem*pow;
        n/=2;
        pow*=10;
    }return result;
}
int main(){
    // int num = 10010101;
    

    cout<<decToBin(5)<<endl;
    
    // int result = binToDec(num);
    // cout<<result;

    return 0;
}