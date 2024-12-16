#include<iostream>
using namespace std;

void mulby2(int &x , int &y , int &z){
    x *= 2;
    y *= 2;
    z *= 2;
}

int main(){
    /*Que 1...*/
    // int x;
    // int *ptr;
    // x=10;
    // ptr=&x;
    // cout<<*ptr;

    /*Que2....*/

    // int x=1 , y=2 , z=3;
    // mulby2(x,y,z);
    // cout<<x<<"  "<<y<<"  "<<z<<endl;


    /*Que3....*/

    int a = 32;
    int *ptr = &a;
    
    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptr += ch;
    cout<<a<<ch;

    return 0;
}