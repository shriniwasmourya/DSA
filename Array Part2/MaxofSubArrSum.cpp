#include<iostream>
#include<vector>
#include <climits>
using namespace std;

void maxArraySum(vector<int> v){
    int n = v.size();
    int arr[n];

    int maxSum = INT_MIN;


    for(int s=0 ; s<n ; s++){
        for(int e = s ; e<n ; e++){
            int arraySum = 0;
            for(int i = s ; i<=e ; i++){
                arraySum += v[i];
            
            }cout<<"Sum : "<<arraySum<< ", ";
            maxSum = max(maxSum , arraySum);
        }
        cout<<endl;
    }
    cout<<"Maximum size of an Subarray sum : "<<maxSum;
}

/*Optimised version of this code...*/

void maxArraySum2(vector<int> v){
    int n = v.size();
    int arr[n];

    int maxSum = INT_MIN;


    for(int s=0 ; s<n ; s++){
            int arraySum = 0;
        for(int e = s ; e<n ; e++){
            arraySum += v[e];
            maxSum = max(arraySum , maxSum);
            cout<<v[e];
    }cout<<", ";  
        }cout<<endl;
    cout<<"Maximum size of an Subarray sum : "<<maxSum;
}

int main(){
    vector<int> v = {2,-3,6,-5};

    maxArraySum2(v);

    return 0; 
}