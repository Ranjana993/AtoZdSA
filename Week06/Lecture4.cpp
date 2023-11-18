#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// int solve(vector<int>& arr , int target){
//   if( target == 0 ) return 0 ;
//   if (target < 0 ) return INT_MAX ;

//   int mini = INT_MAX;
//   for(int i = 0 ; i< arr.size() ; i++){
//     int ans = solve(arr , target-arr[i]);
//     if(ans != INT_MAX){
//       mini = min(mini , ans+1 );
//     }

//   }
//   return mini;
// }

// ! QUESTION 2 :
// int solve(int n, int x, int y, int z)
// {
//     if (n == 0)
//         return 0;

//     if (n < 0)
//         return INT_MIN;
//     int a = solve(n - x, x, y, z) + 1;
//     int b = solve(n - y, x, y, z) + 1;
//     int c = solve(n - z, x, y, z) + 1;

//     return max(a, max(b, c));
// }

void findMax(vector<int> &arr, int i, int sum, int &maxi)
{
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }
    findMax(arr, i + 2, sum + arr[i], maxi);
    findMax(arr, i+1, sum, maxi);
}

int main()
{
    // vector<int> arr{1,2};
    // int target = 5 ;
    // int ans = solve(arr , target);
    // cout << "The ans is "<< ans << endl;
    // return 0;

    // ? DIVIDE INTO SEGMENT
    // int n = 7;
    // int x = 5;
    // int y = 2;
    // int z = 2;
    // int ans = 0;
    // if (ans < 0)
    // {
    //     ans = 0;
    // }
    // ans = solve(n, x, y, z);
    // cout << "The ans is " << ans;

    // ? MAX SUM ADJASCENT VALUES
    vector<int> arr{ 1, 4, 9};
    int sum = 0, maxi = INT_MIN, i = 0;
    findMax(arr, i, sum, maxi);
    cout << maxi << endl;

    return 0;
}