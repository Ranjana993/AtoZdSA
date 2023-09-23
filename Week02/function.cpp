#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "My name is ranjana Yadav" << endl;
    }
}
void printNum(int n)
{
    cout << n << endl;
}
// AddNum
int addNum(int a, int b)
{
    return a + b;
}
int findMax(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << "A is grater ." << endl;
    }
    else if (b > a && b > c)
    {
        cout << "B is greater" << endl;
    }
    else
    {
        cout << "C is greater " << endl;
    }
}

void countNum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

void studentGrade(int num)
{
    if (num >= 90)
    {
        cout << "A" << endl;
    }
    else if (num >= 80)
    {
        cout << "B grade" << endl;
    }
    else if (num >= 70)
    {
        cout << "C grade " << endl;
    }
    else if (num >= 60)
    {
        cout << "D grade" << endl;
    }
    else
    {
        cout << "E grade" << endl;
    }
}

int evenSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    //? PRINTING NAME FOR N NUMBER OF TIMES ..
    // int n = 3;
    // printName(n);

    //? PRINTING NUM
    // int num;
    // cin >> num;
    // printNum(num);

    //? WRITE A FUNCTION TO ADD TWO NUMBERS .
    // int num1, num2;
    // cout << "Enter number 1 and number 2 " << endl;
    // cin >> num1 >> num2;
    // cout << addNum(num1, num2);

    // ? FIND MAX OF THREE NUMBERS
    // int a , b , c ;
    // cout << "Enter the value of a , b and c "<<endl;
    // cin >> a >> b >> c ;
    // findMax(a , b ,c) ;

    //? COUTING FROM 1 TO N
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // countNum(n);

    //? WRITE A FUNCTION OF STUDENT GRADE .
    // int num;
    // cout << "Enter the value of num" << endl;
    // cin >> num;
    // studentGrade(num);

    // ? SUM OF EVEN NUMBER UPTO N
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    cout << evenSum(n);
}
