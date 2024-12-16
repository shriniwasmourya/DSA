#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;




int main(){
     int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};


                    cout<<&arr+1<<endl;
                    cout<<&arr[0][1];

return 0;
}