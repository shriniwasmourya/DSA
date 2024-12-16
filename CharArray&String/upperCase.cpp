#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    char str[]={'A','p','P','e','\0'};
    
    for(int i=0 ; i<strlen(str) ; i++){
        int ch = str[i];
        if(ch>='A' && ch<='Z'){
            str[i] = ch-'A'+'a';
            
        }
    }

    for(int i=0  ; i<strlen(str);i++){
        cout<<str[i]<<"  ";

    }cout<<endl;

return 0;
}