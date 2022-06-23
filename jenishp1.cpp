#include <iostream>
using namespace std;

int main()
{
    string s = "prescription";
    int l;
    l = s.length();
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5 - i; j++)
        {
            cout << s[j];
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << " ";
            cout << " ";
        }
        for (int m = 0; m < i; m++)
        {
            cout << " ";
            cout << " ";
        }
        for (int n = i; n >= 6; n--)
        {

            cout << s[l - n];
            cout << " ";
        }
        for (int n = i; n >= 5 + i; n++)
        {
            cout << s[l - n];

            cout << " ";
        }

        for (int j = 6 - i; j >= 0; j--)
        {
            cout << s[l - j];

            cout << " ";
        }
        cout << endl;

        //  for (int j = i+1; j>=0; j--)
        // {
        //     cout<<s[l-j];

        //     cout<<" ";
        // }
        // cout << endl;
    }

    return 0;
}