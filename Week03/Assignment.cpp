#include <bits/stdc++.h>
#include <vector>
using namespace std;

void moveleft(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
            end--;
        }
    }
}

void findMissing(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

void wavePrint(vector<vector<int>> &v){
    int m = v.size();
    int n = v[0].size();
    
    for(int i = 0 ; i< n ; i++){
        if(i & 1 == 0){
            for(int j = 0 ; j < m ;j++){
                cout << v[j][i] << " ";
            }

        }else{
            for(int  j = m -1 ; j >= 0 ; j--){
                cout << v[j][i]<< " ";
            }
        }
        // cout << endl;
    }
}

    void findMissingSortAndSwapping(vector<int> &arr)
{
    int i = 0;
    while (i < arr.size())
    {
        int index = arr[i] - 1;
        if (arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            ++i;
        }
    }

    // Printing ....
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

int main()
{
    //?  MOVE NEGATIVE TO LEFT ;
    // vector<int> arr{2, -3, 4, -5, -1, 2, -9, 8};
    // moveleft(arr);
    // for(int i = 0 ; i< arr.size() ; i++){
    //     cout << arr[i] << " " ;
    // }

    // ? REMOVE DUPLICATES FROM ARRAY ....
    // vector<int> arr{1, 3, 5, 3, 4};
    // int n = arr.size();
    // findMissing(arr);
    // findMissingSortAndSwapping(arr);



   // ? FIRST REPEATING ELEMENT FROM AN ARRAY .....

// ? WAVE PRINT OF ARRAY ELEMENTS ..

    vector<vector<int >> v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    wavePrint(v);




}