#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void occurrence(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        if(arr[i]==3){
            cout<<"First Occurence : "<<i;
            return ;
        }
    }
}


int main(){
    int arr[] = {2,2,1,3,4};
    occurrence(arr , 5);

return 0;
}