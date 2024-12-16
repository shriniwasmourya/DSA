// sort using insetion sort this ch array

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void insertionSort(char *ch , int size){

    for(int i=1 ; i<size ; i++){
        int curr = ch[i];
        int pre = i-1;


        while(pre>=0 && ch[pre]<curr){
            swap(ch[pre] , ch[pre+1]);
            pre--;

        }
    }

    for(int i=0 ;i<size ; i++){
        cout<<ch[i]<<",  ";
    }cout<<endl;
}


int main(){
    char ch[] = {'f' ,'b', 'a', 'e', 'c', 'd'};
    int size = sizeof(ch)/sizeof(char);
    
    insertionSort(ch , size);



return 0;
}