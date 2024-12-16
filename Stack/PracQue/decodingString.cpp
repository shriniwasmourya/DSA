#include<iostream>
#include<cstring>
#include<climits>
#include<list>
#include<stack>
#include<queue>
using namespace std;

string decodeString(string &s){
    stack<int> counts;
    stack<string> result;
    string currentString = "";
    int currentNum = 0;


    for(char c : s){
        //convert string no into number

        if(c>'0' && c<'9'){
            currentNum = currentNum * 10 + (c-'0');
        }

        else if(c == '['){
            counts.push(currentNum);
            result.push(currentString);
            currentNum = 0;
            currentString = "";
        }

        else if(c == ']'){
            int temp_count = counts.top() ; counts.pop();
            string temp_string = result.top() ; result.pop();

            for(int i=0 ; i<temp_count ; i++){
                temp_string += currentString;
            }

            currentString = temp_string;
        }

        else{
            currentString += c;
        }
    }
return currentString;
}

int main(){
    string str = "3[a]2[bc]";
    cout<<decodeString(str);


return 0;
}