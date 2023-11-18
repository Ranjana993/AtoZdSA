#include <bits/stdc++.h>
using namespace std;

int util(int *p)
{
    p = p + 1;
    *p = *p + 1;
}

int main()
{
    // int a = 5 ;
    // int *p = &a ;
    // int ** q = &p;
    // cout << a << endl;
    // cout << & a <<endl;
    // cout << p << endl;
    // cout << &p <<endl;
    // cout << *p <<endl;
    // cout << q <<endl;
    // cout << &q <<endl;
    // cout << *q <<endl;
    // cout << **q <<endl;

    int a = 6;
    int *p = &a;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
    util(p);
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
}