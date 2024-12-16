#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;
 
void nextGreaterElement(vector<int> arr , vector<int> &ans){
    stack<int> s;
    int idx = arr.size()-1;
    ans[idx] = -1;
    s.push(idx);


    for(int i = idx-1 ; i>=0 ; i--){
            int curr = arr[i];

            while(!s.empty() && curr>= arr[s.top()]){
                s.pop();
            }

            if(s.empty()){
                ans[i] = -1;
            }else{
                ans[i] = arr[s.top()];
            }

            s.push(i);
    }

    //Printing the output

    for(int i=0 ; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main(){
    vector<int> vec = {6,8,0,1,3};
    vector<int> ans(vec.size() , 0);
    nextGreaterElement(vec , ans);
    


return 0;
}