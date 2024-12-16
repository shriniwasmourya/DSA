#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;




int main(){
    char ch[] = "apple";
    int n = strlen(ch);     //for length of the arr
    char str[n];
    
    strcpy(str,ch);           //copy string from src to dest..

    cout<<str;

return 0;
}