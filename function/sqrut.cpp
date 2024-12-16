#include<iostream>
using namespace std;
int square(int n){
    int s = 0 ;
    int e = n-1;
    int mid;
    int ans = -1;

    while(s<=e){
        mid = s+(e-s)/2;
        int sq = mid * mid;

        if(sq==n){
            return mid;
        }else if(sq<n){
            ans = mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }return ans;
}

double findPrecision(int num , int precision , int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0 ; i<precision ;i++){
        factor/=10;
        for(double j=ans ; j*j<num ; j+=factor){
        ans = j;

    }
        }return ans;

}

int main(){
    int n = 37;
    int tempSol = square(n);
    cout<<"The square root of "<<n<<" : "<<findPrecision(n,3,tempSol)<<"\t\t(only number not floating point value required)";

    return 0;
}