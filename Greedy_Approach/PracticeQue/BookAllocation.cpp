#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
using namespace std;

bool isPossible(vector<int> nums , int n , int k,int mid){
    int student = 1;
    int sumSplit =0;

    for(int i=0 ; i<n ; i++){
        if(sumSplit + nums[i] <= mid){
            sumSplit += nums[i];
        }else{
            sumSplit++;
            if(sumSplit>k || nums[i] > mid){
                return false;
            }
            sumSplit = nums[i];
        }
    }
    return true;
}

int splitArrayLargestSum(vector<int> nums , int n , int k){
    int s = 0 ; 
    int sum =0 ; 
    int ans = -1;
    for(int i=0 ; i<n ; i++){
        sum += nums[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;

    while(s<=e){
        mid = s+(e-s)/2;

        if(isPossible(nums , n , k , mid)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {7,2,5,10,8};
    int n = nums.size() ; 
    int k = 2;

    cout<<"Minimized largest sum of split "<<splitArrayLargestSum(nums , n , k)<<endl;


return 0;
}