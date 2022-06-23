#include <iostream>
using namespace std;

int main()
{
    string s = "moradiya";
    cout << "enter word : ";
    cin >> s;
    int l, m;
    l = s.length();
    // if (l / 2 == 0)
    //     m = l / 2;
    // else
    //     m = (l / 2) +1;
    m = l / 2;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= m - i - 1; j++)
        {
            cout << s[j];
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << " ";
            cout << " ";
        }
        for (int o = 0; o < i; o++)
        {
            cout << " ";
            cout << " ";
        }
        for (int n = m - i; n >= 0; n--)
        {
            cout << s[l - n];

            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << s[j];
            cout << " ";
        }
        for (int k = 0; k < m - 1 - i; k++)
        {
            cout << " ";
            cout << " ";
        }
        for (int n = 0; n < m - 1 - i; n++)
        {
            cout << " ";
            cout << " ";
        }
        for (int o = i + 1; o >= 0; o--)
        {
            cout << s[l - o];
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}