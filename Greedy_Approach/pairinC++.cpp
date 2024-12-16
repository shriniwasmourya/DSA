#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(pair<int , int> p1 , pair<int , int> p2){
    // return p1.second < p2.second;  //asecending - end base
    // return p2.second < p1.second;  //descending - end base
    return p2.first > p1.first;     ////asecnding - start base
    // return p2.first < p1.first;      //descending - start base
}

int main(){
    vector<int> start = {0,1,3};
    vector<int> end = {9,2,4};

    vector<pair<int , int>> Activities(3,make_pair(0,0));

    Activities[1] = make_pair(1,2);
    Activities[0] = make_pair(0,9);
    Activities[2] = make_pair(3,4);


    //Printing the pair

    for(int i=0 ; i< Activities.size() ; i++){
        cout<<Activities[i].first <<" , " <<Activities[i].second<<endl;
    }

    //Sorting the pair based on compare funciton...

    sort(Activities.begin() , Activities.end() , compare);

 //Printing the pair
    cout<<"---Sorted---\n";
    for(int i=0 ; i< Activities.size() ; i++){
        cout<<Activities[i].first <<" , " <<Activities[i].second<<endl;
    }

return 0;
}