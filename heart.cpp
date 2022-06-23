#include <iostream>
using namespace std;

int main()
{
    int s;
    // cout << "enter number : ";
    // cin >> s;
    for (int i = 2; i <= 3; i++)
    {
        for (int k = 0; k < 3 - i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int l = 1; l <= i - 2; l++)
        {
            cout << "*";
        }
        for (int m = 1; m <= 3 - i; m++)
        {
            cout << " ";
        }

        for (int n = 0; n < 3 - i + 1; n++)
        {
            cout << " ";
        }
        for (int o = 2; o <= i + 2; o++)
        {
            cout << "*";
        }
        for (int l = 1; l <= i - 2; l++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 6 - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 6 - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// for (int i = s/2; i <= s; i++)
// {
//     for (int k = 0; k < s - i; k++)
//     {
//         cout << " ";
//     }
//     for (int j = 0; j <= i; j++)
//     {
//         cout << "*";
//     }
//     for (int l = 0; l <= i - s+s/2-1; l++)
//     {
//         cout << "*";
//     }
//     for (int m = 1; m <= s - i+s/2-1; m++)
//     {
//         cout << " ";
//     }

//     for (int n = 0; n < s - i + 1; n++)
//     {
//         cout << " ";
//     }
//     for (int o = s - 1; o <= i + s - 1; o++)
//     {
//         cout << "*";
//     }
//     for (int l = 0; l <= i - s +s/2- 1; l++)
//     {
//         cout << "*";
//     }

//     cout << endl;
// }
// for (int i = 0; i < s * 2; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }

//     for (int j = 1; j <= s * 2 - i; j++)
//     {
//         cout << "*";
//     }
//     for (int j = 1; j <= s * 2 - i - 1; j++)
//     {
//         cout << "*";
//     }
//     cout << endl;
// }

// int s;
// cout << "enter number : ";
// cin >> s;

// for (int i = s/2; i <= s; i++)
// {
//     for (int k = 0; k < s - i; k++)
//     {
//         cout << " ";
//     }
//     for (int j = 0; j <= i; j++)
//     {
//         cout << "*";
//     }
//     for (int l = 0; l <= i - s+s/2-1; l++)
//     {
//         cout << "*";
//     }
//     for (int m = 1; m <= s - i+s/2-1; m++)
//     {
//         cout << " ";
//     }

//     for (int n = 0; n < s - i + 1; n++)
//     {
//         cout << " ";
//     }
//     for (int o = s - 1; o <= i + s - 1; o++)
//     {
//         cout << "*";
//     }
//     for (int l = 0; l <= i - s +s/2- 1; l++)
//     {
//         cout << "*";
//     }

//     cout << endl;
// }
// for (int i = 0; i < s * 2; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }

//     for (int j = 1; j <= s * 2 - i; j++)
//     {
//         cout << "*";
//     }
//     for (int j = 1; j <= s * 2 - i - 1; j++)
//     {
//         cout << "*";
//     }
//     cout << endl;
// }