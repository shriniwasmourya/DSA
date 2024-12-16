#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>
#include<map>
#include<list>
#include<stack>
#include<queue>

using namespace std;


int main(){
    map<int , string> m;
    m[101] = "Shriniwas Mourya";
    m[110] = "Karan ";
    m[113] =  "Arjun";

    //Printing the map..

    cout<<m[101]<<endl;
    cout<<m[110]<<endl;

    //Update existing value using key..
    m[110] = "Rajat Dalal";
    cout<<m[110]<<endl;


    //check key is present or not...

    cout<<m.count(110)<<endl;
    cout<<m.count(120)<<endl;

    for(auto it : m){
        cout<<it.first<<" = "<<it.second<<endl;
    }


return 0;
}