#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


void palindrome(char ch[] , int n){
    
    char ch1[n];
    for(int i=0 ; i<n ; i++){
        ch1[i]=ch[i];
    }

    bool ispalindrome = true;

    for(int i=0 ; i<n ; i++){
        if(ch1[i]==ch[i]){
            ispalindrome=false;
        }
        }

        if(ispalindrome){
            cout<<"Palindrome :";
        }
        else{
            cout<<"NOt a palindrome :";
        }
   
}


void binaryPalindrome(char ch[] , int n){
    int  s = 0 ; 
    int e = n-1 ; 
    bool ispalin = true;
    while(s<=e){
        if(ch[s++]==ch[e--]){
            ispalin = false;
        }
    }

    if(ispalin){
        cout<<"Palindrome :";
 
    }else{
        cout<<"Not a Palidrome :";
    }
}

int main(){
    char ch[] = "olloj";

    // palindrome(ch , 4);
    binaryPalindrome(ch , 4);

return 0;
}