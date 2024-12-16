#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void staitSearch(int arr[4][4] , int n , int m , int key){
    int s = 0 ; 
    int e = m-1;
    int mid;
    
    while(s<n && e>=0){
        if(arr[s][e]==key){
            cout<<"Key found at cell ("<<s<<","<<e<<")"<<endl;
            return;
        }
        else if(arr[s][e]<key){
            s++;
        }else{
            e--;
        }
    }

    cout<<"Not Found :";

}



int main(){
     int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
staitSearch(arr , 4 , 4 , 6);
return 0;
}