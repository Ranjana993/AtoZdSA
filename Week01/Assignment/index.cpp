#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ? SOLID SQUARE PATTERN
    // n = 4 ;
    // * * * *
    // * * * *
    // * * * *
    // * * * *

    // int n;
    // cout << "Enter the value of n : " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ? HOLLOW SQUARE PATTERN
    // n = 4 ;
    // * * * *
    // *     *
    // *     *
    // * * * *

    // int n;
    // cout << "Enter the value of n : " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         if (row == 0 || row == n - 1 || col == 0 || col == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ? INVERTED HALF HOLLOW PYRAMID
    // n = 6 ;
    // * * * * * *
    // *       *
    // *     *
    // *   *
    // * *
    // *

    // int n;
    // cout << "Enter the value of n : " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         if (row == 0 || col == 0 || col == n - row - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ? HOLLOW FULL  PYRAMID
    // n = 6 ;
    // * * * * * *
    //   *     *
    //    *  *
    //     *

    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int k = 0;
        for (int col = 0; col < ((2 * n) - 1); col++)
        {
            if (col < n - row - 1)
            {
                cout << " ";
            }
            else if (k < 2 * row + 1)
            {
                if (k == 0 || k == 2 * row || row == n - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}