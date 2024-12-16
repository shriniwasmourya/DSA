#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void substr(string str , string ansString){

    //Base case 
    if(str.size() == 0){
        cout<<ansString<<endl;
        return;
    }
    char ch = str[0];
    int n = str.length();
    substr(str.substr(1 , n-1) , ansString+ch);
    substr(str.substr(1,n-1) , ansString);


}


int main(){
    string str = "abc";
    string ansString = " ";

    substr(str , ansString);

return 0;
}