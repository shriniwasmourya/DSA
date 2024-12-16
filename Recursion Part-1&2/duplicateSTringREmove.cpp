#include<iostream>
#include<vector>
#include<climits>
#include<set>
#include<algorithm>
#include<cstring>
using namespace std;

void remdup(string str , string ans , int i , int map[26]){
    if(i==str.size()){
        cout<<ans<<endl;
        return;
    }


    int mapidx = (int)(str[i]-'a');

    if(map[mapidx]){
        remdup(str , ans , i+1 , map);
    }else{
        map[mapidx]=true;
        remdup(str , ans+str[i] , i+1 , map);
    }

   
}


int main(){
    /*I don't know this is correct or not!*/
    // set<char>s;

    // string n =  "shriniwas";

    // for(int i=0  ; i<n.size(); i++){
    //     s.insert(n[i]);
    // }

    // for(char c : s){
    //     cout<<c;
    // }cout<<endl;



    string str = "shriniwas";
    string ans = "";

    int map[26] = {false};

    remdup(str , ans , 0 , map);

return 0;
}