#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inc(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[0] = arr[0] + 10;
        printArray(arr, size);
    }
}

bool searchElement(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

void count01(int arr[], int n)
{
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            one++;
        }
        else if (arr[i] == 0)
        {
            zero++;
        }
    }
    cout << "The number of 1 is " << one << " "
         << "The number of zero is " << zero << endl;
}

int findMax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int findMin(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

void extremePrint(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {

        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++, end--;
    }
    cout << endl;
}

void reverseArray(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    // int arr;
    // int brr[5];
    // int crr[5] = {2, 3, 4, 5, 5};
    // int drr[10] = {1, 2, 3, 4, 5, 6};
    // int err[4] = {2, 3, 4, 5};
    // char ch[4] = {'a', 'b', 'c', 'd'};

    // cout << "Successfull" << endl;

    // int arr[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // ? TANKING INPUTS FROM USERS ..
    // int n = 10;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //?  UPDATING THE VALUE
    // int arr[10] = {1,2,3,4,5};
    // for(int i = 0 ; i < 10 ; i ++){
    //     arr[i] = 1 ;
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // ?ARRAY AND FUNCTION
    // int arr[] = {3, 5};
    // int size = 2;
    // inc(arr, size);
    // printArray(arr, size);

    // ? LINER SEARCH IN ARRAY ...
    // int arr[10] = {2, 3, 4, 5, 6, 7, 8, 9};
    // int size = 10;
    // if (searchElement(arr, size, 4))
    // {
    //     cout << "fOUND" << endl;
    // }
    // else
    // {
    //     cout << "Not found " <<endl;
    // }

    // ? COUNT 0 AND 1 IN ARRAY ....
    // int  arr[]= {0 ,0,0,0,1,1,1,1,0,0,0,1} ;
    // int size = 12 ;
    // count01(arr , size) ;

    // ? ,AXIMUM NUMBER IN AN ARRAY ....
    // int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 12};
    // int size = 9;
    // cout << "The maximum number is : " << findMax(arr, size);
    // cout << "The minimum number is : " << findMin(arr, size);

    // ? EXTREME PRINTS IN ARRAY ...
    // int arr[] = {10, 20, 30, 40, 50};
    // int size = 5;
    // extremePrint(arr, size);

    //? REVERSE ARRAY ..
    int arr[] = {2, 3, 4, 5};
    int size = 4;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
