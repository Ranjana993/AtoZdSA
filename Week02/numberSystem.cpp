#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    // divide method ....
    int res = 0, i = 0;
    while (n > 0)
    {
        // int bit = n % 2;  // first method
        int bit = (n & 1); // second method
        res = bit * pow(10, i++) + res;
        // n /= 2; //first method
        n = n >> 1; // second method
    }
    return res;
}

int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int digit = n % 10;
        decimal = decimal + digit * pow(2, i++);
        n /= 10 ;
    }
    return decimal;
}

int main()
{

    // ? DECIMAL TO BINARY .....
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // cout << decimalToBinary(n);

    // ? BINARY TO DECIMAL.....
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    cout << decimalToBinary(n);

    return 0;
}