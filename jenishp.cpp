#include <iostream>
#include <string>
using namespace std;

int main()
{
    string r, s = "jenish";
    int l;
    l = s.length();
    for (int i = 0; i <= l; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << s[l - j];

            cout << " ";
        }
        for (int k = 0; k < l - i; k++)
        {
            cout << s[k];
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
