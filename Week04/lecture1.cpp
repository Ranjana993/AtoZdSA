#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int firstOccurance(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1, ans = -1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}

int lastOccurance(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1, ans = -1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    // ? BINARY SEARCH.....
    // vector<int> arr{2, 3, 4, 5, 7, 8, 9, 12, 15};
    // int target = 2;
    // int res = binarySearch(arr, target);
    // if (res !=-1)
    // {
    //     cout << "Found " << endl;
    // }
    // else
    // {
    //     cout << "Not found " << endl;
    // }

    //? FIRST OCCURANCE ....
    // vector<int> arr{1, 2, 5, 5, 5, 5, 5, 5, 5, 7};
    // int target = 5;
    // int res = firstOccurance(arr, target);
    // cout <<"The ans is " << res << endl;

    //? LAST OCCURANCE ....
    // vector<int> arr{1, 2, 5, 5, 5, 5, 5, 5, 5, 5 , 7 };
    // int target = 5;
    // int res = lastOccurance(arr, target);
    // cout << "The ans is " << res << endl;

    //  ? TOTAL OCCURANCE
    vector<int> arr{1, 2, 5, 5, 5, 5, 5, 5, 5, 5, 7};
    int target = 5;
    int res1 = firstOccurance(arr, target);
    int res2 = lastOccurance(arr, target);
    int res3 = res2 - res1;
    cout << "The total occurance is " << res3 << endl;



    
    // peak element in a mountain array
}