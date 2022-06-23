#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "enter word : ";
    cin >> s;
    int l, m;
    l = s.length();
    m = l / 2;

    for (int i = 1; i <= m + 1; i++)
    {
        for (int k = 0; k < m + 1 - i; k++)
        {
            cout << "  ";
        }

        for (int j = 1 - i + m; j <= m; j++)
        {
            cout << s[j];
            cout << " ";
        }
        for (int j = m + 1; j <= i + m - 1; j++)
        {
            cout << s[j];
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
