#include<iostream>
using namespace std;

// int hello(){
//     int a=3 , b=4;
//     int sum = a+b;
//     return sum;
// }

// int sum(){
//     int sum = hello();
//     return sum+6;
// }
//Forward declaration
// void wish();


//function with parameter...
// int sum ( int a , int b){
//     return a+b;
// }

// int product(int a , int b){
//     return a*b;
// }

// void check(int n ){
//     if(n%2==0){
//         cout<<"Given number is prime :"<<n<<endl;
//     }else{
//         cout<<"Not prime"<<endl;
//     }
// }

// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }return n*factorial(n-1);
// }


// bool isprime(int n){
//     for(int i=2 ;i*i<=n ; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// void allprime(int n){
//     for(int i=2 ; i<n ; i++){
//         if(isprime(i)){
//             cout<<i<<" ";
//         }
//     }
// }

// void palindrome(int n){
//     int num = n;
//     int sum = 0;

//     while(n>0){
//         int digit = num%10;
//             sum = sum*10+digit;
//             num/=10;
//     }
//     if(sum == n){
//         cout<<"This is palindrome Number";
//     }else{
//         cout<<"Not a palindrome number";
//     }
// }


// int sumdigit(int n){
//     // int num = n;
//     int sum =0;

//     while(n>0){
//         int digit = n%10;
//             sum +=digit;
//             n/=10;
//     }
//     return sum;
// }

void largest(int a , int b , int c){
r        cout<<"A is greater";
    }else if(b>a && b>c){
        cout<<"B is greater";
    }else{
        cout<<"C is greater";
    }
}

// void nextChar(char ch ){
//     if(ch=='z'){
//         cout<<'a'<<endl;
//     }
//     cout<<ch++<<endl;
// }

int main(){
    int a = 2 , b = 2 , c = 4;
    largest(2,3,4);
    // cout<<"The char :"<<nextChar('k');
    // nextChar('k');
    // int result = sum();
    // cout<<"Sum :"<<result<<endl;

    // wish();
    // cout<<product(2,5);
    // check(3);
    // cout<<"Factorial :"<<factorial(5);
    // allprime(5);
    // cout<<isprime(4);
    // palindrome(121);
    // cout<<sumdigit(123);

    return 0;
}

// void wish(){
//     cout<<"Hey bro , How are you!";
// }