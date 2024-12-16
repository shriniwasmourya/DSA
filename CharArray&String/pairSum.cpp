#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void pairSum(vector<int> arr , int n){
    int s = 0 ; 
    int e = n-1;
    int sum = 0 ;
    vector<int> ans;
    
    while(s<e){
       sum = arr[s]+arr[e];

        if(sum == 9){
        ans.push_back(s);
        ans.push_back(e);
        break;
        
    }else if(sum > 9){
        e--;
    }else{
        s++;
    }
    }
int m = ans.size();
cout<<m<<endl;
for(int i=0 ; i<m ; i++){
    cout<<ans[i]<<" , ";

}


}

int main(){
    vector<int> arr = {2,7,11,15};
    int n = arr.size();
    pairSum(arr , n);

return 0;
}