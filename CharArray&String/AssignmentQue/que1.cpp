#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

void vowerOccFind(string str , int n){
    int count = 0;
    for(int i=0 ; i<n ; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }

    cout<<"Occurence of Vowel in string :"<<count<<endl;
}


int main(){
    string str =  "hey brow , how you i think you well feel ";
    int n = str.length();
    vowerOccFind(str,n);

return 0;
}