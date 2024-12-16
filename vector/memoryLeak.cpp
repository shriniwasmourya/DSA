#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;


int * func(){
    int *ptr = new int;
    *ptr = 1200;
    cout<<"Ptr point to "<<*ptr<<endl;
    return ptr;
}

int main(){
   int *x = func();
   cout<<"X point to "<<*x<<endl;

return 0;
}