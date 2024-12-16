#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

int timeNeedtoBuyTickets(vector<int> &tickets , int k){
    queue<int> q;

    for(int i=0  ; i<tickets.size() ; i++){
        q.push(i);
    }

    int time = 0;

    while(!q.empty()){
        time++;
        int idFront = q.front();
        q.pop();
        tickets[idFront]--;

        if(k==idFront && tickets[idFront] ==0){
            return time;
        }

        if(tickets[idFront] != 0){
            q.push(idFront);
        }
    }
    return time;
}

int main(){
    vector<int> tickets = {5,1,1};
    int k = 1;

    cout<<timeNeedtoBuyTickets(tickets,k);


return 0;
}