#include <iostream>
#include <vector>
using namespace std;

// selection sort....
void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

// Bubble sort....
void bubbleSort(vector<int> &arr)
{
    bool isSwapped = false;

    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = 0; j <= arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (isSwapped == false)
        {
            break;
        }
    }
}

// insertion sort....
void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int val = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > val)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = val;
    }
}

int main()
{
    //?SELECTION SORT....
    vector<int> arr{2, 1, 4, 13, 7, 8, 9, 5, 3, 6};
    selectionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    //? BUBBLE SORT ...
    // vector<int> arr{10, 1, 7, 6, 14, 9};
    // bubbleSort(arr);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //? INSERTION SORT ...
    // vector<int> arr{2, 1, 4, 13, 7, 8, 9, 5, 3, 6};
    // insertionSort(arr);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}