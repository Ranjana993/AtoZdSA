#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &arr, int n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i + 1] < arr[i])
    {
        return false;
    }
    return checkSorted(arr, n, i + 1);
}

int searchKey(vector<int> &arr, int start, int end, int target)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] < target)
    {
        return searchKey(arr, mid + 1, end, target);
    }
    else
    {
        return searchKey(arr, start, mid - 1, target);
    }
}

void printSub(string str, string output, int i)
{
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }
    // exclude
    printSub(str, output, i + 1);
    output.push_back(str[i]);
    printSub(str, output, i + 1);
}

int main()
{

    // ? IS SORTED CHECK ....
    // vector<int> arr{10, 23, 25, 32, 56, 63, 67};
    // int n = arr.size();
    // bool isSorted = checkSorted(arr, n, 0);
    // isSorted ? cout << "Array is sorted " : cout << "Array is not sorrted " << endl;

    // ?BINARY SEARCH ....
    // vector<int> arr{2, 4, 5, 6, 13, 17, 23, 28, 39, 212};
    // int target = 17, start = 0, end = arr.size() - 1;
    // int ans = searchKey(arr, start, end, target);
    // cout << "The ans is : " << ans << endl;

    // ? SUBSEQUENCE OF A STRING ;
    string str = "abc";
    string output = "";
    int i = 0;
    printSub(str, output, i);
}