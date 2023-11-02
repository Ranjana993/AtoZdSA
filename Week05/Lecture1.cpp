#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;

//! QUESTION NUMBER 01 : Find the length of string :: SOL
int lengthOfStr(char ch[])
{
    int len = 0;
    int i = 0;
    while (ch[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

// ! QUESTION NUMBER 02 : Reverse a String :: SOL
void reverseStr(char str[])
{
    int n = lengthOfStr(str);
    int start = 0, end = n - 1;

    while (start <= end)
    {
        swap(str[start], str[end]);
        start++, end--;
    }
}
// ! QUESTION NUMBER 03 : REPLACE ALL SPACES :: SOL
void replaceSpace(char ch[])
{
    int n = lengthOfStr(ch);
    for (int i = 0; i < n - 1; i++)
    {
        if (ch[i] == ' ')
        {
            ch[i] = '@';
        }
    }
}

// ! QUESTION NUMBER 04 : VALID PALINDROME :: SOL
bool ValidPalindrome(char ch[])
{
    int start = 0, end = lengthOfStr(ch) - 1;
    while (start <= end)
    {
        if (ch[start] != ch[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

// ! QUESTION NUMBER 04 : CONVERT STRING INTO UPPERCASE
void convertToUpperCase(char ch[])
{
    int n = lengthOfStr(ch);
    for (int i = 0; i < n; i++)
    {
        ch[i] = ch[i] - 'a' + 'A';
    }
}

// ? QUESTION NUMBER 04.1 : CONVERT STRING INTO LOWERCASE
void convertToLowerCase(char ch[])
{
    int n = lengthOfStr(ch);
    for (int i = 0; i < n; i++)
    {
        ch[i] = ch[i] - 'A' + 'a';
    }
}

int main()
{
    // ? 1st way of taking input in char
    // char ch[100];
    // cout << "Enter your name " << endl;
    // cin >> ch;
    // cout << "Your name is " << ch << endl;

    // ? 2st way of taking input in char
    // char ch[100];
    // ch[0] = '1';
    // ch[1] = '1';
    // ch[2] = '1';
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << ch[i] << " " ;
    // }

    // ? 3rd way of taking input in char with (tabs space and enter )
    // char name[100];
    // cout << "Enter your name " << endl;
    // cin >> name ; // first ways
    // cin.getline(name ,100);
    // cout << "Your name is " << name << endl;

    //! QUESTION NUMBER 1 :  Find the length of string ;
    // char ch[100] = {'1', 'a', 'b', 's', '4', 'g', 'd'};
    // cout << "the length is " << lengthOfStr(ch) << endl;
    // cout <<"the alternative way is "<< strlen(ch) << endl;

    // ! QUESTION NUMBER 02 : Reverse a String ;
    // char str[100];
    // cout << "Enter anything "<< endl;
    // cin >> str ;
    // reverseStr(str);
    // cout << str;

    // ! QUESTION NUMBER 03 : REPLACE ALL SPACES
    // char ch[100];
    // cout << "Enter your name " << endl;
    // cin.getline(ch , 100);
    // replaceSpace(ch);
    // cout << ch << endl;

    // ! QUESTION NUMBER 04 : VALID PALINDROME
    // char name[1000];
    // cout << "Enter valid number " << endl;
    // cin.getline(name, 1000);
    // bool ans = ValidPalindrome(name);
    // if(ans){
    // cout << "YES PALINDROME"<<endl;
    // }
    // else{
    //     cout <<"Not palindrome "<<endl;
    // }

    // ! QUESTION NUMBER 04 : CONVERT STRING INTO UPPERCASE
    // char str[1000];
    // cout << "Enter string " << endl;
    // cin >> str;
    // convertToUpperCase(str);
    // cout <<"The ans is "<< str<< endl;
    // ? QUESTION NUMBER 04.1 : CONVERT STRING INTO UPPERCASE
    // convertToLowerCase(str);
    // cout << "The lower caseans is " << str << endl;

    // ! ========================STRING ==================== !//
    // string str;
    string str1 = "ranjan kumari";
    // cout << "Enter string " << endl;
    // getline(cin, str);
    // cout << "The ans is " << str1 << endl;
    // cout << "The ans is " << str1.empty() << endl;
    // cout << "The ans is " << str1.length() << endl;
    // cout << "The ans is " << str1.capacity() << endl;
    // str1.push_back('a');
    // cout << "The ans is " << str1 << endl;
    // str1.pop_back();
    // cout<< "The ans is " << str1 << endl;
    // cout << "The ans is " << str1.substr(0, 3) << endl;
    string a = "Love";
    string b = "Lover";
    (a.compare(b) == 0) ? cout << "YES " : cout << "NO" << endl;
}
