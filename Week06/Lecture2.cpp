#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n, int i)
{
    if (i >= n)
    {
        return;
    }
    cout << arr[i] << " ";
    printArr(arr, n, i + 1);
}

int findMax(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
    {
        return maxi;
    }
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    findMax(arr, n, i + 1, maxi);
}
int findMin(int arr[], int n, int i, int &mini)
{
    if (i >= n)
    {
        return mini;
    }
    if (arr[i] < mini)
    {
        mini = arr[i];
    }
    findMin(arr, n, i + 1, mini);
}

// bool findKey(string str , int n , int i , char key){
//     if(i >=n){
//         return false ;
//     }
//     if(str[i] == key){
//         return true;
//     }

//     return findKey(str , n ,i+1 , key);
// }

void findKey(string str, int n, int i, char key, vector<int> &ans)
{
    if (i >= n)
    {
        return;
    }
    if (str[i] == key)
    {
        ans.push_back(i);
    }

    findKey(str, n, i + 1, key, ans);
}

void printDigit(int n)
{
    if (n == 0)
    {
        return;
    }
    printDigit(n / 10);
    int digit = n % 10;
    cout << digit << " ";
}

int main()
{
    //  CLIMBING STAIRS

    //    TRAVERSING ARRAY USING RECURSION ....
    // int arr[] = {11, 2, 3, 4, 5, 6};
    // printArr(arr, 6, 0);
    // cout << endl;
    // int maxi = INT_MIN;
    // int mini = INT_MAX;
    // int ans = findMax(arr, 6, 0, maxi);
    // cout << "the ans is " << ans << endl;
    // int ans1 = findMin(arr, 6, 0, mini);
    // cout << "the ans is " << ans1 << endl;

    // FINDING THE KEY USING RECURSION
    // string str = "Ranjana";
    // char key = 'a';
    // int n = str.length();
    // bool ans = findKey(str , n , 0 , key );
    // ans ? cout << "YES " : cout <<"NO" <<endl;
    // vector<int>ans;
    // findKey(str, n, 0, key , ans);
    // for(auto i : ans) cout << i<<" " ;

    // PRINTING THE DIGITS USING RECURSION
    // int num = 678;
    // printDigit(num);
}