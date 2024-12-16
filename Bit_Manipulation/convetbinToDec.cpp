#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;




int main(){
    int num = 6;
    int n = num ;
    int result = 0;
    int pow=1;

    /*Binary To Decimal*/
    // for(int i=0 ; i<3 ; i++){
    //     int digit = n%10;
    //     result += digit * pow;
    //     pow *= 2;
    //     n/=10;
    // }
    // cout<<result;

    /*Decimal to Binary..*/

    for(int i = 0 ; n>0 ; i++){
        int digit = n%2 ; 
        result += digit*pow;
        n/=2;
        pow *= 10;
    }

    cout<<result;

return 0;
}