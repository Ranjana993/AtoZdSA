#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ? FULL PYRAMID...
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ?INVERTED FULL PYRAMID ....
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row ; col++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // ?SOLID DIAMOND ...
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ? HOLLOW DIAMOND....
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col == 0)
    //         {
    //             cout << "* ";
    //         }
    //         else if (col == 2 * row)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 2 * n - 2 * row - 1; col++)
    //     {
    //         if (col == 0 || col == 2 * n - 2 * row - 2)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ? FLIPPED SOLID  DIAMOND .....
    //     int n;
    //     cout << "Enter the value of n " << endl;
    //     cin >> n;
    //     // upper...
    //     for (int row = 0; row < n; row++)
    //     {
    //         // stars
    //         for (int col = 0; col < n - row; col++)
    //         {
    //             cout << "*";
    //         }
    //         // ṣpace
    //         for (int col = 0; col < 2*row+1; col++)
    //         {
    //             cout << " ";
    //         }
    //         // star
    //         for (int col = 0; col < n - row; col++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    // // lower ....
    //     for (int row = 0; row < n; row++)
    //     {
    //         // stars
    //         for (int col = 0; col < row+1; col++)
    //         {
    //             cout << "*";
    //         }
    //         // ṣpace
    //         for (int col = 0; col < 2 * n - 2 * row-1 ; col++)
    //         {
    //             cout << " ";
    //         }
    //         // star
    //         for (int col = 0; col <  row+1 ; col++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    // ? FANCY PATTERN #2 .
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << row+1 << " ";
    //         if(col != row){
    //             cout << "* " ;
    //         }
    //     }
    //     cout << endl;
    // }
    // // lower
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row ; col++)
    //     {
    //         cout << n- row  << " ";
    //         if (col != n-row-1 )
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ? NUMERIC  PALINDORDME PYRAMID....
    // int n;
    // cout << "Enter the value of N " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     int col;
    //     for (col = 0; col < row + 1; col++)
    //     {
    //         cout << col + 1;
    //     }
    //     for (col = col - 1; col >= 1; col--)
    //     {
    //         cout << col;
    //     }
    //     cout << endl;
    // }

    // ? ALPHABET PALINDORDME PYRAMID....
    // int n;
    // cout << "Enter the value of N " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     int col;
    //     for (col = 0; col < row + 1; col++)
    //     {
    //         int res = col+1 ;
    //         char ch = res +'A'-1;
    //         cout << ch<<" ";
    //     }
    //     for (col = col - 1; col >= 1; col--)
    //     {
    //         int res = col;
    //         char ch = res + 'A' - 1;
    //         cout << ch <<" ";
    //     }
    //     cout << endl;
    // }

    // ? NUMERIC PYRAMID ..
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << row + col + 1;
    //     }
    //     int start = 2*row ;
    //     for (int col = 0; col < row ; col++)
    //     {
    //         cout << start ;
    //         start--;
    //     }
    //     cout << endl;
    // }

    // ? NUMERIC HOLLOW PYRAMID
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     int start = 1;
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (row == 0 || row == n - 1)
    //         {
    //             if (col % 2 == 0)
    //             {
    //                 cout << start;
    //                 start++;
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //         else
    //         {
    //             if (col == 0)
    //             {
    //                 cout << 1;
    //             }
    //             else if (col == 2 * row + 1 - 1)
    //             {
    //                 cout << row + 1;
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    return 0;
}
