#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;


int search(vector<int>v ,int i , int n , int k){
    vector<int> result(n);
    if(i==n){
        cout<<"Key Not Found";
        
    }

    if(v[i]==k){
        result.push_back(i);
    }
    
       return search(v,i+1,n , k);
    

    for(int i=0 ; i<result.size() ; i++){
        cout<<v[i]<<"  ";
    }cout<<endl;
}

int main(){
    vector<int> v = {1,2,3,2,3,4,3};
    int n = v.size();
    int k = 1;
    search(v ,0, n , k);

return 0;
}


/*#include <iostream>
#include <vector>
using namespace std;

void findIndices(vector<int>& arr, int start, int key, vector<int>& result) {
    if (start == arr.size()) {
        return;
    }

    if (arr[start] == key) {
        result.push_back(start);
    }

    findIndices(arr, start + 1, key, result);
}

vector<int> getIndices(vector<int>& arr, int key) {
    vector<int> result;
    findIndices(arr, 0, key, result);
    return result;
}

int main() {
    vector<int> arr = {1, 2, 1, 2, 3, 1};
    vector<int> result = getIndices(arr, 2);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}*/