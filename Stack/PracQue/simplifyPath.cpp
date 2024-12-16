// #include<iostream>
// #include<cstring>
// #include<climits>
// #include<list>
// #include<stack>
// #include<queue>
// #include<sstream>
// using namespace std;

// string simplifyPath(string path){
//     string token;
//     stringstream ss(path);
//     stack<string> s;

//     while(getline(ss,token,'/')){
        
//         if(token =="" || token ==".") continue;

//         if(token != ".."){
//             s.push(token);
//         }else if(!s.empty()){
//             s.pop();
//         }
//     }


// if(s.empty()){
//     return "/";
// }

// string result = "";

// while(!s.empty()){
//     result = "/"+s.top() + result;
//     s.pop();
// }
// return result;


// }

// int main(){
//     string path = "/a/./b/.././../c";
//     cout<<simplifyPath(path);


// return 0;
// }













#include <iostream>
#include <stack>
#include <string>

using namespace std;

string decodeString(const string& s) {
    stack<int> counts;       
    stack<string> results;  
    string currentString = "";
    int currentNum = 0;      

    for (char c : s) {
        if (c >= '0' && c <= '9') {
            // If the character is a digit, build the current number
            currentNum = currentNum * 10 + (c - '0'); // Convert char to int manually
        } else if (c == '[') {
            // Push the current count and string onto their respective stacks
            counts.push(currentNum); // Push the current number
            results.push(currentString); // Push the current string
            currentNum = 0;             // Reset currentNum
            currentString = "";         // Reset currentString
        } else if (c == ']') {
            // Time to decode the substring
            int count = counts.top(); counts.pop(); // Get the number of repetitions
            string temp = results.top(); results.pop(); // Get the last string before the current bracket
            // Build the string by repeating it count times
            for (int i = 0; i < count; ++i) {
                temp += currentString; // Append the current string to temp
            }
            currentString = temp; // Update current string
        } else {
            // If it's a regular character, add it to the current string
            currentString += c;
        }
    }
    
    return currentString; // Return the final decoded string
}

int main() {
    string s = "3[a2[c]]";
    cout << decodeString(s) << endl; // Output: accaccacc
    return 0;
}