#include<iostream>
using namespace std;


int main(){
    // int a = 10;
    // int *ptr = &a;
    // cout<<ptr<<endl;
    // ptr=ptr+2;
    // cout<<ptr<<endl;

    int a[] = { 1,2,3,4,5,6,7};
    int n  = 7 ;

    // for(int i=0  ; i<9 ; i++){
    //     cout<<*a+i<<endl;
    //     // a=a+2;
    // }

    // int *ptr1 = a ;
    // int *ptr2 = ptr1+5;
    // cout<<ptr1<<endl;
    // cout<<ptr2<<endl;
    // cout<<ptr2-ptr1<<endl;

    /*Pointer Arithmetic Compariosion*/
    int *p = a;
    cout<<(p==a)<<endl;

    return 0;
}