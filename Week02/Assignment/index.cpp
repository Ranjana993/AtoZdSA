#include <bits/stdc++.h>
using namespace std;

float area(float radius)
{
    return 3.14 * radius * radius;
}

bool isEvenOdd(int num)
{
    if (/*num % 2 == 0 */ (num & 1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

long long factorial(long long n)
{
    long long res = 1;
    for (long long i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

bool isPrime(int n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

bool checkPrime(int n)
{
    int i = 2;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    //? NUMERIC HOLLOW HALF PYRAMID ...
    // int n ;
    // cout << "Enter the value of n "<< endl;
    // cin >> n ;
    // cout << endl;
    // for(int row = 0 ; row < n ; row++){
    //     for(int col = 0 ; col < row+1 ; col ++){
    //         if(row == 0 || row == n-1 || col == 0 || col == row ){
    //             cout << col+1 << " " ;
    //         }else{
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ?NUMERIC HOLLOW INVERTED PYRAMID ...
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // cout << endl;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = row + 1; col <= n; col++)
    //     {
    //         if (row == 0 || row == n - 1 || col == row + 1 || col == n)
    //         {
    //             cout << col << " ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ?  NUMERIC PALINDROME EQUILATERAL PYRAMID
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // int k = n;
    // for (int row = 0; row < n; row++)
    // {
    //     //  space .
    //     int count = 1 ;
    //     for (int col = 0; col < k; col++)
    //     {
    //         if (col < n - row - 1)
    //         {
    //             cout << "  ";
    //         }
    //         else if(col <= n - 1)
    //         {
    //             cout << count << " " ;
    //             count++;
    //         }
    //         else if(col == n ){
    //             count = count -2 ;
    //             cout << count  << " ";
    //             count --;
    //         }
    //         else{
    //             cout << count << " ";
    //             count--;
    //         }
    //     }
    //     k++;
    //     cout <<endl;
    // }

    // ? SOLID HALF DIAMOND ..
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // cout << endl;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // // lower
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ? FANCY PATTERN #1...
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // assert(n<=9);
    // cout << endl;
    // for (int row = 0; row < n; row++)
    // {
    //     int start = 8 - row;
    //     int num = row + 1;
    //     int count = num;
    //     for (int col = 0; col < 17; col++)
    //     {
    //         if (col == start && count > 0)
    //         {
    //             cout << num << " ";
    //             start += 2;
    //             count--;
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ? FANCY PATTERN #2...
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // cout << endl;
    // int count = 1;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }
    // int start = count - n;
    // for (int row = 0; row < n; row++)
    // {
    //     int k = start;
    //     for (int col = 0; col <= n - row -1 ; col++)
    //     {
    //         cout << k << " ";
    //         k++;
    //     }
    //     start = start - (n- row - 1 );
    //     cout << endl;
    // }

    // ? FANCY PATTERN #3..
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // cout << endl;
    // for (int row = 0; row < n; row++)
    // {
    //     int condition = row <= n / 2 ? 2 * row : 0;
    //     for (int col = 0; col <= condition; col++)
    //     {
    //         if (col <= condition / 2)
    //         {
    //             cout << col + 1 << " ";
    //         }
    //         else
    //         {
    //             cout << condition - col + 1 << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //? FLOYED'S TRIANGLE PATTERN .
    // int n ;
    // cout <<"Enter the value of n "<<endl;
    // cin >> n ;
    // cout << endl;
    // int num = 1 ;
    // for(int  row = 0 ; row < n ; row++){
    //     for(int col = 0 ; col < row ; col++){
    //         cout << num <<" ";
    //         num++;
    //     }
    //     cout <<endl;
    // }

    // ? BUTTERFLY PATTERN ....
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    cout << endl;

    for (int row = 0; row < 2 * n; row++)
    {
        int condi = row < n ? row : (n+(n-row-1));
        int space = row < n ? 2 * (n - condi - 1) : row-condi-1 ;

        for (int col = 0; col < 2 * n; col++)
        {
            if (col <= condi)
            {
                cout << "* ";
            }
            else if (space > 0)
            {
                cout << "  ";
                space--;
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }

    // ? AREA OF  A CIRCLE ...
    // float r ;
    // cout << "Enter the value of radius "<<endl;
    // cin >> r ;
    // cout << "The area of circle is "<< area(r) <<" . " << endl;

    // ? GIVEN NUMBER IS EVEN OR ODD ;
    // int num;
    // cout << "Enter the number " << endl;
    // cin >> num;
    // bool ans = isEvenOdd(num);
    // ans ? cout << "The number is even ." << endl : cout << "The number is odd" << endl;

    // ? FIND THE FACTORIAL ...
    // long long  n;
    // cout << "Enter the number " << endl;
    // cin >> n;
    // cout << "The ans is : "<< factorial(n);

    // ? CHECK GIVEN NUMBER IS PRIME OR NOT ...
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // bool ans = isPrime(n);
    // ans ? cout << "The number is prime ." << endl : cout << "The number is not prime . " << endl;

    // ? PRINT ALL THE PRIME NUMBER FROM 1 TO N .
    // int n;
    // cout << "Enter the value of  n " << endl;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     bool res = checkPrime(i);
    //     if (res)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // ? REVERSE INTEGER ..
    // 🔵 Leetcode Question number 7 .

    // ? SET THE KTH BIT
    // 🔵 link => https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

    //? CONVERT THE TEMPERATURE .
    // leetcode =>  https://leetcode.com/problems/convert-the-temperature/
}