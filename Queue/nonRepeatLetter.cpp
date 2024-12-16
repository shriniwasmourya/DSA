// #include<iostream>
// #include<cstring>
// #include<climits>
// #include<list>
// #include<stack>
// #include<queue>
// using namespace std;

// void nonRepeatingLetter(string str){
//     int fre[26] = {0};
//     queue<char> q;

//     for(int i=0 ; i<str.size() ; i++){
//         char ch = str[i];

//         fre[ch-'a']++;
//         q.push(ch);

//         while(!q.empty() && fre[q.front()-'a'] > 1){
//             q.pop();
//         }

//         if(q.empty()){
//             cout<<"-1\n";
//         }else{
//             cout<<q.front()<<endl;
//         }
//     }
    
// }

// int main(){
//     string str = "aabccxb";

//     nonRepeatingLetter(str);

// return 0;
// }


//Second try for practice...


#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

void nonRepeatingLetter(string str){
    int freq[26] =  {0};
    queue<char> q;

    for(int i=0 ; i<str.size() ; i++){
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);

        while(!q.empty() && freq[q.front() - 'a'] > 1){
            q.pop();
        }

        if(q.empty()){
            cout<<"-1"<<endl;
        }else{
            cout<<q.front()<<endl;
        }
    }
}

int main(){
    string str = "aabccxb";
    nonRepeatingLetter(str);


return 0;
}