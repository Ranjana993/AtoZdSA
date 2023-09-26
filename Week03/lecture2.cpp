#include <bits/stdc++.h>
#include <vector>
using namespace std;

int findUnique(vector<int> &arr)
{
    int res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int unionArray(vector<int> &arr1, vector<int> &arr2, vector<int> &ans)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        ans.push_back(arr2[i]);
    }
}

void findIntersect(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> ans;
    int n = arr1.size(), m = arr2.size();

    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = -1;
                break;
            }
        }
    }

    for (auto item : ans)
        cout << item << " ";
}

void pairSum(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Elements are " << arr[i] << " " << arr[j] << endl;
                break;
            }
        }
    }
}

void tripleSum(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << "Elements are " << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    break;
                }
            }
        }
    }
}

void quadSum(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                for (int l = k + 1; l < arr.size(); l++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == target)
                    {
                        cout << "Elements are " << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l] << " " << endl;
                        break;
                    }
                }
            }
        }
    }
}

void sort01(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[end] == 1)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
void sortZeroOne(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int i = 0;
    while (start < end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            i++, start++;
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }
}

int main()
{
    // vector<int> arr;
    // vector<char> arr;
    // vector<bool> arr;
    // int ans = sizeof(arr) / sizeof(bool);
    // cout << ans << endl;
    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;

    // ? INSERTING ARRAY
    // vector<int> arr;
    // arr.push_back(3);
    // arr.push_back(4);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // ? SECOND WAY OF INITIALISATION OF VECTOR OF ARRAY
    // vector<int> arr{2, 3, 4, 5};
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // ?
    // vector<int> arr(12 , 2);
    // for(int i = 0 ; i <arr.size() ; i++){
    //     cout << arr[i] << " ";
    // }

    // ?FIND UNIQUE ELEMENT ELEMENT IN AN ARRAY ..
    // vector<int> arr{
    //     1,
    //     2,
    //     3,
    //     4,
    //     2,
    //     1,
    //     3,
    //     6,
    //     4,
    // };
    // cout << "Unique element is :: " << findUnique(arr);

    // ? UNION OF TWO ARRAYS ...
    // vector<int> arr1{1, 2, 3};
    // vector<int> arr2{5, 4, 6};
    // vector<int> ans;
    // unionArray(arr1, arr2, ans);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    //? INTERSECTION OF TWO ARRAYS ....
    // vector<int> arr1{2, 3, 4, 5, 6, 6, 2, 2};
    // vector<int> arr2{2, 8, 9, 6, 6, 6};
    // vector<int> ans;
    // findIntersect(arr1, arr2);

    // ? PAIR SUM ....
    // vector<int> arr{2, 3, 4, 5, 6, 7, 8, 9 };
    // int target = 18;
    // pairSum(arr , target);
    // tripleSum(arr, target);
    // quadSum(arr, target);

    // ? SORT 0 AND 1'S ...
    // vector<int> arr{1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1};
    // sort01(arr);
    // sortZeroOne(arr);
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
}
