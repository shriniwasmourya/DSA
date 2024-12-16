#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void findSubset(string str , string subset){
//Base case

    if(str.size() == 0){
        cout<<subset<<endl;
        return;
    }



    int n = str.length();
    char ch = str[0];
    findSubset(str.substr(1,n-1) , subset+ch);    //Yes
    findSubset(str.substr(1,n-1),subset);  //No

    
}


int main(){
    string str = "abc";
    string subset = " ";
    findSubset(str , subset);

return 0;
}