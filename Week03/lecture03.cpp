#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printRowWiseArray(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printColWiseArray(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

void rowSum(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << "The row size sum is " << sum << endl;
    }
}

void colSum(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[j][i];
        }
        cout << "The col size sum is " << sum << endl;
    }
}

int linerSearch(int arr[][3], int n, int m, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == k)
            {
                return 1;
            }
        }
    }
    return 0;
}

int findMax(int arr[][3], int n, int m)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int findMin(int arr[][3], int n, int m)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

void transposeMatrix(int arr[][3], int n, int m, int res[][3])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[j][i] = arr[i][j];
        }
    }
}

int main()
{

    // ? Printing array
    //     int arr[3][3]={
    //         {2,3,4},
    //         {5,6,7},
    //         {9,8,7}
    //     };
    //     int n = 3 , m = 3 ;
    //     printRowWiseArray(arr , n , m );
    //     cout << "Printing col wise array "<< endl;
    // printColWiseArray(arr , n , m );

    // ? Taking inputs from user
    // int arr[4][4];
    // int n = 4, m = 4;
    // cout << "Enter the values "<< endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // printRowWiseArray(arr, n, m);

    //? Printing row wise sum .....
    // int arr[3][3] = {
    //     {2, 3, 4},
    //     {5, 6, 7},
    //     {9, 8, 7}};
    // int n = 3, m = 3;
    // rowSum(arr, n, m);

    // ?Printing column wise sum ..
    // int arr[3][3] = {
    //     {2, 3, 4},
    //     {5, 6, 7},
    //     {9, 8, 7}};
    // int n = 3, m = 3;
    // colSum(arr, n, m);

    // ?Linear Search...
    // int arr[3][3] = {
    //     {2, 3, 4},
    //     {5, 6, 7},
    //     {9, 8, 7}};
    // int n = 3, m = 3 , k = 16;
    // if(linerSearch(arr , n , m , k)){
    //     cout << "Found  "<<endl;
    // }
    // else{
    //     cout << "Not Found "<<endl;
    // }

    // ?Find Max in array ....
    // int arr[3][3] = {
    //     {2, 3, 4},
    //     {5, 6, 12},
    //     {9, 8, 7}};
    // int n = 3, m = 3, k = 16;
    // cout << "The max is : " << findMax(arr, n, m) << endl;
    // cout << "The min is : " << findMin(arr, n, m);

    // ?Transpose a matrix ...
    // int arr[3][3] = {
    //     {2, 3, 4},
    //     {5, 6, 12},
    //     {9, 8, 7}};
    // int n = 3, m = 3;
    // int res[3][3];
    // transposeMatrix(arr , n , m ,res);
    // printRowWiseArray(res , n , m );

    // ?CREATING 2D ARRAY USING VECTOR....
    // vector<vector<int>> arr;
    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6};
    // vector<int> c{7, 8, 9};
    // vector<int> d{10, 11, 12};
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    // arr.push_back(d);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // ? DIFFERENT WAY .
    int row = 3, col = 5;
    vector<vector<int>> arr(row, vector<int>(col, 2));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
