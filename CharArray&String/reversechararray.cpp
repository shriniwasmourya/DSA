#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;




int main(){
    char ch[] = "apple";
    int s=0 ; 
    int e=strlen(ch)-1;

    while(s<=e){
        swap(ch[s++],ch[e--]);
    }

    for(int i=0 ; i<strlen(ch)  ; i++){
        cout<<ch[i]<<"  ";
    }cout<<endl;


return 0;
}