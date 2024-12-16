#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4][4] = {
        {1, 2, 3},
        {5, 6, 7},
        {11, 10, 11},
    };
    int n = 3, m = 3;
    int prisum = 0;
    int secsum = 0;
    
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < m; j++)
    //     {
    //         if (i == j){

    //             prisum += arr[i][j];
    //     }else if(j==n-i-1){
    //                 secsum += arr[i][j];

    //     }
    // }
    // }

    for(int i=0 ;i<=n ; i++){
        // cout<<arr[i][i]<<"  ";
    prisum += arr[i][i];
        if(i!=n-i-1){
            // cout<<arr[i][n-1-i]<<"  ";
            secsum += arr[i][n-i-1];
        }
    }

    cout << secsum << " + " << prisum << "  =  " << secsum + prisum;
    return 0;
}