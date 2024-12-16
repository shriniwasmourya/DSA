#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;




int main(){
    int num ;
    cout<<"Enter the number : ";
    cin>>num; 

    /*Power Of Two(2)*/

    if(!(num&(num-1))){
        cout<<"This is power Of 2 ";
    }else{
        cout<<"Not";
    }
     


return 0;
}