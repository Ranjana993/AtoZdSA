#include <bits/stdc++.h>
#include <vector>
using namespace std;

//? BINARY SEARCH IN A NEARLY SORTED ARRAY ...
int nearlySorted(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 2;
        }
        else
        {
            start = mid + 2;
        }
    }
    return -1;
}

// ? DIVIDE TWO NUMBERS USING BINARY SEARCH.

int divideNumber(int dividend, int divisor)
{
    int start = 0, end = abs(dividend), ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (abs(divisor * mid) == abs(dividend))
        {
            return mid;
            break;
        }
        if (abs(divisor * mid) > dividend)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0))
    {
        return ans;
    }
    return -ans;
}

int oddOccuring(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        if(start == end) {
            return start;
        }
        int mid = start + (end - start) / 2;
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    //? BINARY SEARCH IN A NEARLY SORTED ARRAY ...
    // vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    // int res = nearlySorted(arr, 50);
    // cout << "The index is " << res << endl;

    // ? DIVIDE TWO NUMBERS USING BINARY SEARCH.
    // int dividend = 32, divisor = -7;
    // int ans = divideNumber(dividend, divisor);
    // cout << "The ans is " << ans << endl;
 
    // ? FIND ODD OCCURING ELEMENT IN AN ARRAY ..
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 600, 600, 4, 4, 3};
    int ans = oddOccuring(arr);
    cout << "The ans is " << arr[ans] << endl;
    // ?
}