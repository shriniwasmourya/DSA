#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;


void freeMemory(){
       int size;
    cout<<"Enter the size of array :";
    cin>>size;

    int *arr = new int[size];
    int x = 1;
    for(int i=0 ;i<size ; i++){
         arr[i]=x;
        cout<<arr[i]<<endl;
        x++;
    }

    delete [] arr;
}

int main(){
 
freeMemory();

return 0;
}