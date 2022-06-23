#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "enter number : ";
    // cin >> n;
    for (int i = 0; i <= 4; i++)
    {

        if (i == 0 || i == 4)
            cout << "  ";
        else
            cout << "* ";
    }
    cout << endl;
    for (int k = 0; k < 1; k++)
    {
        for (int l = 0; l <= 4; l++)
        {
            if (l == 0 || l == 4)
                cout << "* ";
            else
                cout << "  ";
        }
    }
    cout << endl;
    for (int j = 0; j < 4 - 2; j++)
    {
        cout << "* " << endl;
    }
    for (int a = 0; a < 1; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            if (b == 0 || b >= 4/2)
                cout << "* ";
            else
                cout << "  ";
        }
    }
    cout << endl;
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l <= 4; l++)
        {
            if (l == 0 || l == 4)
                cout << "* ";
            else
                cout << "  ";
        }
        cout<<endl;
    }
    
    for (int i = 0; i <= 4; i++)
    {

        if (i == 0 || i == 4)
            cout << "  ";
        else
            cout << "* ";
    }
    cout<<endl;

    return 0;
}
