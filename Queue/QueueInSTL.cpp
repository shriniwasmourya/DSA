#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
return 0;
}

