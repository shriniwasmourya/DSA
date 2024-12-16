//Que1 factoril

// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;
//     int store=1;
//     for(int i=1 ; i<=n ; i++){
//         store *= i;
//     }
//     cout<<"The factorial of "<<n<<": "<<store<<endl;
//     return 0;
// }


//Que 2 Multiplication...

// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for(int i=1; i<=10 ; i++){
//         cout<<n*i<<endl;
//     }

//     return 0;
// }

//Que3 armstrong number...

// #include<iostream>
// using namespace std;


// int main(){
//     int num = 153;
//     int result = 0;
//     int n = num;
//     while(n>0){
//         int digit = n%10;
//         result += digit*digit*digit;
//         n/=10;
//     }

//     if(result == num){
//         cout<<"yes";
//     }else{
//         cout<<"No";
//     }
    
//     return 0;
// }

//Que4 prime number...

// #include<iostream>
// using namespace std;


// int main(){
//     int n = 10;

//     for(int i=2 ; i<=n ; i++){
//         int current = i;
//         bool isprime = true;
//         for(int j=2 ; j*j<=i ; j++){
//             if(current % j == 0){
//                 isprime = false;
//             }
//         }
//         if(isprime){
//             cout<<current<<"  ";
//         }

//     }

//     return 0;
// }


//Que5  fibonacci Series print

#include<iostream>
using namespace std;
int fibo(int n ){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n = 10;

    int first = 0 , second = 1 ;

    // fibo(n);

    // for(int i=0  ; i<n ; i++){
    //     cout<<fibo(i)<<" ";
    // }
    cout<<first<<", "<<second<<", ";
    for(int i=2 ; i<= n ; i++){
        int temp = first+second;
        first = second ;
        second = temp;
        cout<<temp<<", ";
    }

    return 0;
}