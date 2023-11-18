#include <bits/stdc++.h>
using namespace std;


void solve(int arr[]){
    cout << "the size inside solve" <<sizeof(arr) <<endl;
}

int main()
{
    // int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // cout << "arr[1] : "<< arr[1] << endl;
    // cout << "*arr : " << *arr << endl;
    // cout << "*arr+1 : " << *arr + 1 << endl;
    // cout << "&arr : " << &arr << endl;
    // cout << "&arr : " << *(arr+1) << endl;
    // cout << "&arr : " << *(arr+2) << endl;
    // cout << "&arr : " << *(arr+3) << endl;

    // int i = 0;
    // cout << arr[i] << endl;
    // cout << i[arr] << endl;
    // cout << *arr <<endl;
    // cout << *(i+arr) <<endl;

// ! using pointer 
// int *ptr = arr;
// cout << &arr <<endl;
// cout << ptr+1 << endl;

// ! sizeof

// int arr[10];
// cout << sizeof(arr) <<endl;
// int * ptr = arr ;
// cout << sizeof(ptr)<<endl;

// char name[10] ="ranjana";
// char *ch = name ;
// cout << ch << endl;   // ! cout behaviour is different for character array
// cout << name << endl;
// cout << &name << endl;
// cout << name[0] << endl;
// cout << ch << endl;
// cout << &ch << endl;
// cout << *ch <<endl;

// char name[10] ="ranjana";
// char *ch = "name";
// cout << name <<endl;
// cout << ch << endl;

// ! Pointers with functions 

int arr[10]={1,2,3,4,5,6,7,8,9,10};
cout << "Size of main function "<< sizeof(arr) <<endl;
solve(arr);



}