#include <bits/stdc++.h>
#include <vector>
using namespace std;

int squareRoot(int n)
{
    int start = 0, end = n;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

bool binarySearch(int arr[][4], int row, int col, int target)
{
    int start = 0, end = row * col - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int rowIndex = mid / col, colIndex = mid % col;
        if (arr[rowIndex][colIndex] == target)
        {
            return true;
        }
        else if (arr[rowIndex][colIndex] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

int main()
{
    // ? FIND SQUARE ROOT OF NUMBER
    // int n;
    // cout << "Enter the number " << endl;
    // cin >> n;
    // int res = squareRoot(n);
    // cout << "res is " << res << endl;
    // double finalAns = res;
    // double step = 0.1;
    // int precesion = 2;
    // for (int i = 0; i < precesion; i++)
    // {
    //     for (double j = finalAns; j * j <= n; j += step)
    //     {
    //         finalAns = j;
    //     }
    //     step /= 10;
    // }
    // cout << "The final ans is " << finalAns << endl;

    //? BINARY SEARCH IN 2D MATRIX
    int arr[5][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};
    int row = 5, col = 4;
    bool ans = binarySearch(arr, row, col, 62);
    if (ans)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}