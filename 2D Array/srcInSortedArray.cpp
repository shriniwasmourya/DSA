#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int searchKey(int arr[4][4] , int n , int m){
    for(int i=0 ; i<n ; i++){
    int s =0 ; 
    int e=n-1 ; 
    int mid;


    while(s<=e){
        mid = s+(e-s)/2;

        if(arr[i][mid]==11){
            cout<<i<<mid<<endl;
            return i,mid;
        }else if(11>arr[i][mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }

}
    return -1;
}



int main(){
     int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};


             int result =    searchKey(arr , 4 ,4);
             cout<<result;

return 0;
}