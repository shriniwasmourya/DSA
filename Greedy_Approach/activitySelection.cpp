#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

int maxActivity(vector<int> start , vector<int> end){
    int count = 1;
    cout<<"Activity Selection A0"<<endl;
    int currentEnd = end[0];

    for(int i=0  ; i<start.size() ; i++){
        if(currentEnd <= start[i]){
            count ++;
            cout<<"Activity Selectin A["<<i<<"]"<<endl;
            currentEnd = end[i];
        }
    }

    return count;
}

int main(){
    vector<int> start = {2,3,3,8};
    vector<int> end = {3,4,7,10};
    
    cout<<"Maximum Activity : \n"<<maxActivity(start , end);

return 0;
}