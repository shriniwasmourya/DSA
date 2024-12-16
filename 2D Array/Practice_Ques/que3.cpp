#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void tranpose(int arr[2][3]){
    int n=2; 
    int m=3;

    int mat[3][2]={{0}};

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            mat[j][i]=arr[i][j];
        }
    }



    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<mat[i][j]<<"  ";
        }cout<<endl;
    }

    
}

int main()
{
    int arr[2][3] = { {11, 12, 13},
                      {21, 22, 23}

    };
    tranpose(arr);

    return 0;
}