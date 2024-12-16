//Patttern 
// 11111
// 22222
// 33333
// 44444
// 55555



// #include<iostream>
// using namespace std;


// int main(){
//     int n=5;

//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n ; j++){
//             cout<<i;
//         }cout<<endl;
//     }

//     return 0;
// }

//Que 2 star pattern ,,,

// #include<iostream>
// using namespace std;


// int main(){
//     int n =4;

//     for(int i=1 ; i<= n ; i++){
//         for(int j=1 ; j<=i ; j++){
//             cout<<"*";
//         }cout<<endl;
//     }

//     return 0;
// }

// Que3 Inverted star pattern...

// #include<iostream>
// using namespace std;


// int main(){
//     int n=4 ;
//     // for(int i= n ; i>0 ; i--){
//     //     for(int j=0 ; j<i  ; j++){
//     //         cout<<"*";
//     //     }cout<<endl;
//     // }

//       for(int i= 1 ; i<=n ; i++){
//         for(int j=1 ; j<=(n-i+1)  ; j++){
//             cout<<"*";
//         }cout<<endl;
//     }


//     return 0;
// }

// Que4 half pyramid Pattern

// #include<iostream>
// using namespace std;


// int main(){
//     int n=4 ;
//     // for(int i=1 ; i<=n ; i++){
//     // int count = 1;
//     //     for(int j=1 ; j<=i ; j++){
//     //         cout<<count;
//     //         count++;
//     //     }cout<<endl;
//     // }

//      for(int i=1 ; i<=n ; i++){
//     int count = 1;
//         for(int j=1 ; j<=i ; j++){
//             cout<<j;
//         }cout<<endl;
//     }

//     return 0;
// }


// Que5 character pyramid Pattern

// #include<iostream>
// using namespace std;


// int main(){
//     int n= 4;
//     char ch = 'A';
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i ; j++){
        
//             cout<<ch;
//             ch++;
//         }cout<<endl;
//     }

//     return 0;
// }

// Que6  Hollow Rectangle Pattern

// #include<iostream>
// using namespace std;


// int main(){
//     int n = 5;

//     for(int i=0 ; i<5 ; i++){
//         for(int j=0 ; j<5 ; j++){
//             if(i==0 || i==4 || j==0 ||j==4){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }cout<<endl;
//     }

//     return 0;
// }


//Que7 space wala star pattern...

// #include<iostream>
// using namespace std;


// int main(){
//     int n = 5;

//     for(int i=0 ; i<n ; i++){
//         //spaces
//         for(int j=0 ; j<n-i ; j++){
//             cout<<" ";
//         }

//         //starts
//         for(int k=0 ; k<i ; k++){
//             cout<<"*";
//     }cout<<endl;
//      }

//     return 0;
// }




// Que8 floyd's triangle...


// #include<iostream>
// using namespace std;


// int main(){
//     int n = 5;
//     int count = 1;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<i ; j++){
//             cout<<count++<<" ";
//         }cout<<endl;
//     }

//     return 0;
// }

// Que9 Pyramid Pattern


#include<iostream>
using namespace std;


int main(){
    int n = 5;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i ; j++){
            cout<<"  ";
        }

        for(int k=0 ; k<2*i-1 ; k++){
            cout<<"* ";
        }cout<<endl;
    }

       for(int i=n ; i>0 ; i--){
        for(int j=0 ; j<n-i ; j++){
            cout<<"  ";
        }

        for(int k=0 ; k<2*i-1; k++){
            cout<<"* ";
        }cout<<endl;
    }

    return 0;
}