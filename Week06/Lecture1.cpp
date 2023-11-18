#include <bits/stdc++.h>
using namespace std;

void printcounting(int n)
{
    if (n == 0)
    {
        return;
    }
    printcounting(n - 1);
    cout << n << " ";
}

void printreverseCount(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printreverseCount(n - 1);
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n* factorial(n - 1);
}

int fibbo(int n ){
    if(n == 1 || n==0){
        return 1 ;
    }
    return fibbo(n-1)+ fibbo(n-2);
}

int main()
{
    int n = 6;
    // printcounting(n);
    // printreverseCount(n);
    // int ans = factorial(n);
    // cout << "Ans is :: "<< ans << endl;

    // int ans =  fibbo(n);
    // cout << "Ans is :: " << ans << endl;

    // printArr;
    // find max in arr
}