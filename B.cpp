#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "enter number : ";
    cin >> rows;
    if (rows >= 2)
    {
        for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (i == 0 || j == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        for (int o = 1; o < 2; o++)
        {
            if (i == 0)
            {
                cout << "  ";
            }
            else
                cout << "* ";
        }

        cout << endl;
    }
    for (int k = 0; k < rows; k++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int l = 0; l <= rows; l++)
    {
        for (int m = 1; m <= rows; m++)
        {
            if (l == rows || m == 1)
                cout << "* ";
            else
                cout << "  ";
        }

        for (int p = 1; p < 2; p++)
        {
            if (l == rows)
            {
                cout << "  ";
            }
            else
                cout << "* ";
        }
        cout << endl;
    }
    }
    else
    {
        cout<<"please input gretter than 2 ";
    }
    return 0;
}